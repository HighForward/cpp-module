#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"

Character::Character(std::string const &name) : _name(name), _AP(40), _weapon(NULL)
{

}

Character::~Character()
{

}

Character::Character(const Character &copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

Character &Character::operator=(const Character &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}

std::string Character::getName() const
{
    return (_name);
}

int Character::getAP() const
{
    return (_AP);
}

void Character::recoverAP()
{
    _AP += 10;
    if (_AP > 40)
        _AP = 40;
}

void Character::equip(AWeapon *weapon)
{
    _weapon = weapon;
}

std::string Character::getWeaponName() const
{
    return (_weapon->getName());
}

int Character::gotWeapon() const
{
    if (_weapon == NULL)
        return (0);
    else
        return (1);
}

void Character::attack(Enemy *enemy)
{
    if (gotWeapon() == 1 && _AP > _weapon->getAPCost())
    {
        _AP = _AP - _weapon->getAPCost();
        if (_AP < 0)
            _AP = 0;
        std::cout << _name << " attaque " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
        _weapon->attack();
        enemy->takeDamage(_weapon->getDamage());
        if (enemy->getHP() <= 0)
            delete enemy;
    }
}

std::ostream &operator<<(std::ostream& stream, const Character &overload)
{
    if (overload.gotWeapon() == 0)
        stream << overload.getName() << " has " << overload.getAP() << " AP and is unarmed" << std::endl;
    else
        stream << overload.getName() << " has " << overload.getAP() << " AP and carries a " << overload.getWeaponName() << std::endl;
    return (stream);
}