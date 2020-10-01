#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include "iostream"

class ClapTrap
{
public:
    ClapTrap(std::string name_arg);
    ~ClapTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void getHitPts(void);

protected:
	unsigned int hitPts;
	unsigned int maxHitPts;
	unsigned int energyPts;
	unsigned int maxEnergyPts;
	unsigned int Lvl;
	std::string name;unsigned int meleeDmg;
	unsigned int rangeDmg;
	unsigned int armorReduction;
};

#endif