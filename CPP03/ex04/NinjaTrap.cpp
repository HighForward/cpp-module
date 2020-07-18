#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name_arg) : ClapTrap(name_arg)
{
    hitPts = 60;
    maxHitPts = 60;
    energyPts = 120;
    maxEnergyPts = 120;
    Lvl = 1;
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
    std::cout << name << " met un gros highkick à " << temp.get_name() << std::endl;
    temp.takeDamage(meleeDmg);
}

void NinjaTrap::ninjaShoebox(ScavTrap &temp)
{
    std::cout << name << " jette un petit caillou à " << temp.get_name() << std::endl;
    temp.takeDamage(rangeDmg);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &temp)
{
    std::cout << name << " fait du extrêmement sale à " << temp.get_name() << std::endl;
    temp.takeDamage(rangeDmg);
    temp.takeDamage(meleeDmg);
}