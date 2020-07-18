#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name_arg) : FragTrap(name_arg), NinjaTrap(name_arg), ClapTrap(name_arg)
{
    name = name_arg;
    hitPts = 100;
    maxHitPts = 100;
    energyPts = 120;
    maxEnergyPts = 120;
    Lvl = 1;
    meleeDmg = 60;
    rangeDmg = 20;
    armorReduction = 5;
    std::cout << "SuperTrap: " << name_arg << ": Construction" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "SuperTrap: Destruction" << std::endl;
}