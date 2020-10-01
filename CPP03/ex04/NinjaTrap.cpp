#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name_arg) : ClapTrap(name_arg)
{
	hitPts = 60;
	maxHitPts = 60;
	energyPts = 120;
	maxEnergyPts = 120;
	Lvl = 1;
	name = name_arg;
	meleeDmg = 60;
	rangeDmg = 5;
	armorReduction = 0;
	std::cout << "NinjaTrap: " << name_arg << ": Construction" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap: Destruction" << std::endl;
}
void NinjaTrap::ninjaShoebox(FragTrap &temp)
{
	std::cout << name << " Met un highkick à " << temp.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &temp)
{
	std::cout << name << " Jette un ridicule cailloux sur " << temp.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &temp)
{
	std::cout << name << " Fait du extrêmement SALE à " << temp.getName() << std::endl;
}
void NinjaTrap::ninjaShoebox(ClapTrap &temp)
{
	std::cout << name << " Attaque " << temp.getName() << " légèrement quoi." << std::endl;
}
