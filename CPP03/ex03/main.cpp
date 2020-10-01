#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    ClapTrap Clap("Max");
    FragTrap Frag("Maxou");
    ScavTrap Scav("Maxounet");
    NinjaTrap Ninja("Maximum");

	std::cout << std::endl;

	Ninja.ninjaShoebox(Clap);
	Ninja.ninjaShoebox(Frag);
	Ninja.ninjaShoebox(Scav);
	Ninja.ninjaShoebox(Ninja);

    std::cout << std::endl;
}