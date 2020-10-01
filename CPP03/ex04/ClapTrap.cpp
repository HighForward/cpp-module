#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name_arg)
{
    hitPts = 0;
    maxHitPts = 0;
    energyPts = 0;
    maxEnergyPts = 0;
    Lvl = 1;
    name = name_arg;
    meleeDmg = 0;
    rangeDmg = 0;
    armorReduction = 0;
    std::cout << "ClapTrap: "<< name << ": Construction" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: Destruction" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "ClapTrap " << name << " attaque " << target << " à distance, causant " << rangeDmg << " points de dégâts !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "ClapTrap " << name << " attaque " << target << " à distance, causant " << meleeDmg << " points de dégâts !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Aïe !" << std::endl;
    if ((amount - armorReduction) > hitPts)
        hitPts = 0;
    else
        hitPts = hitPts - (amount - armorReduction);
    std::cout << "Points de vie : " << hitPts << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Restauration des points de vie" << std::endl;
    if (hitPts + amount > 100)
        hitPts = 100;
    else
        hitPts = hitPts + amount;
    std::cout << "Points de vie : " << hitPts << std::endl;
}

void ClapTrap::getHitPts(void)
{
	std::cout << "Points de vie : " << hitPts << std::endl;
}

std::string ClapTrap::getName()
{
	return (name);
}