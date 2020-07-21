#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
//    AWeapon weapon("", 0, 0);
    Character *moi = new Character("Moi");

    std::cout << *moi;

    Enemy *b = new RadScorpion();

    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);

    moi->attack(b);
    std::cout << *moi;
    moi->equip(pr);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    moi->attack(b);
    std::cout << *moi;
    return 0;
}