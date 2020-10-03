#include "Character.hpp"

Character::Character(std::string name)
{
    _name = name;
    for (int x = 0; x < 4; x++)
        materia[x] = NULL;
}

Character::~Character()
{
    for (int x = 0; x < 4; x++)
    {
        if (materia[x] != NULL)
            delete (materia[x]);
    }
}

Character::Character(const Character &copy)
{
	for (int x = 0; x < 4; x++)
		materia[x] = NULL;
    *this = copy;
}

Character &Character::operator=(const ICharacter &copy)
{
    if (this != &copy)
    {
        this->_name = copy.getName();
        for (int x = 0; x < 4; x++)
        {
            if (materia[x] != NULL)
            {
                delete materia[x];
                materia[x] = NULL;
            }
            materia[x] = copy.getMaterias(x);
        }
    }
    return (*this);
}

AMateria *Character::getMaterias(int index) const
{
    AMateria* copy = NULL;
    if (materia[index] != NULL)
        copy = materia[index]->clone();
    return (copy);
}


int Character::getNbMateria()
{
    int nb = 0;

    for (int x = 0; x < 4; x++)
    {
        if (materia[x] != NULL)
            nb++;
    }
    return (nb);
}

int Character::getFreeSpace()
{
    for (int x = 0; x < 4; x++)
    {
        if (materia[x] == NULL)
            return (x);
    }
    return (-1);
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* toEquip)
{
    if (getNbMateria() < 4)
        materia[getFreeSpace()] = toEquip;
    else
        std::cout << "unfortunately, he can't equip more than 4 materia :(" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 4 && materia[idx] != NULL)
        materia[idx] = NULL;
    else
        std::cout << "there's nothing to unequip here :/" << std::endl;

}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && materia[idx] != NULL)
	{
		materia[idx]->use(target);
	}
    else
        std::cout << "there's nothing to use here :/" << std::endl;
}