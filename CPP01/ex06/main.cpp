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
    Weapon rifle("AK47");

	HumainB.setWeapon(rifle);
	HumainB.attack();
    rifle.setType("M4A1");
	HumainB.attack();

	std::cout << std::endl;

	{
		Weapon club = Weapon("Crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("Crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}





}