#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy) : AWeapon(copy)
{
	*this = copy;
}
PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &copy)
{
	AWeapon::operator=(copy);
	return (*this);
}
