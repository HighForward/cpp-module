#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
    std::cout << "Constructor" << std::endl;
}

AWeapon::~AWeapon()
{
    std::cout << "Destructor" << std::endl;
}

std::string AWeapon::getName() const
{
    return (_name);
}

int AWeapon::getAPCost() const
{
    return (_apcost);
}

int AWeapon::getDamage() const
{
    return (_damage);
}