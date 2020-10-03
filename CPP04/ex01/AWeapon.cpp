#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int damage, int apcost) : _name(name), _damage(damage), _apcost(apcost)
{

}

AWeapon::~AWeapon()
{

}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator=(const AWeapon &copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_apcost = copy._apcost;
		this->_damage = copy._damage;
	}
	return (*this);
}

std::string const &AWeapon::getName() const
{
    return (this->_name);
}

int AWeapon::getAPCost() const
{
    return (_apcost);
}

int AWeapon::getDamage() const
{
    return (_damage);
}
