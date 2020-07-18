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
    std::string get_name(void);

protected:
    int hitPts;
    int maxHitPts;
    int energyPts;
    int maxEnergyPts;
    int Lvl;
    std::string name;
    int meleeDmg;
    int rangeDmg;
    int armorReduction;
};

#endif