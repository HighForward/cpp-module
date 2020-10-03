#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
    Character *moi = new Character("Moi");

    std::cout << *moi;

    Enemy *b = new RadScorpion();

    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    moi->equip(pr);
    std::cout << *moi;
    moi->equip(pf);

	std::cout << b->getHP() << std::endl;
	moi->attack(b);
	std::cout << b->getHP() << std::endl;
    std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << b->getHP() << std::endl;
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	Enemy *a = new SuperMutant();

	std::cout << a->getHP() << std::endl;
	moi->attack(a);
	moi->attack(a);
	std::cout << a->getHP() << std::endl;
	moi->attack(a);
	moi->attack(a);
	std::cout << a->getHP() << std::endl;
	moi->attack(a);
	moi->attack(a);
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();
	std::cout << a->getHP() << std::endl;
	moi->attack(a);
	moi->attack(a);
	moi->attack(a);
	moi->attack(a);
	moi->attack(a);
	std::cout << a->getHP() << std::endl;
	moi->attack(a);
	moi->attack(a);
	moi->attack(a);

	delete moi;
	delete pr;
	delete pf;
    return 0;
}