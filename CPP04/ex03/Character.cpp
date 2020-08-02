#include "Character.hpp"

Character::Character(std::string name)
{
    _name = name;
    for (int x = 0; x < 4; x++)
        materia[x] = NULL;
}

Character::~Character()
{
    std::cout << "Destructor" << std::endl;
}

Character::Character(const Character &copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}
//
Character &Character::operator=(const ICharacter &copy)
{
    std::cout << "Assignation operavvvtor" << std::endl;
    if (this != &copy)
    {
        this->_name = copy.getName();
        for (int x = 0; x < 4; x++)
        {
            if (materia[x] == NULL)
            {
                materia[x] = NULL;
//                materia[x] = copy.materia[x]->clone();
            }
        }
    }
    return (*this);
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
        materia[idx]->use(target);
    else
        std::cout << "there's nothing to use here :/" << std::endl;
}