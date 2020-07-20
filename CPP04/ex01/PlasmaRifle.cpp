#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
    std::cout << "Constructor" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{
    std::cout << "Destructor" << std::endl;
}

void PlasmaRifle::attack() const
{
    std::cout << "*piouuu piouuu piouuu *" << std::endl;
}
