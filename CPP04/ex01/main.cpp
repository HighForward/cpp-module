#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int main(void)
{
//    AWeapon weapon("", 0, 0);
    PlasmaRifle pr("AK47", 30, 30);

    std::cout << pr.getName() << pr.getAPCost() << pr.getDamage() << std::endl;
}