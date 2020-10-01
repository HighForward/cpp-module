#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon knife;
    HumanA HumainA("A", knife);

    knife.setType("Huntman");
	HumainA.attack();
    knife.setType("Karambit");
	HumainA.attack();

    HumanB HumainB("B");
    Weapon *rifle = new Weapon("AK47");

	HumainB.setWeapon(rifle);
	HumainB.attack();
    rifle->setType("M4A1");
	HumainB.attack();

	std::cout << std::endl;
}