#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int damage, int apcost) : _name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::~AWeapon()
{

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