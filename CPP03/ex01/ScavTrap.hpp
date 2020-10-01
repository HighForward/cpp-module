#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>

class ScavTrap
{
public:
    ScavTrap(std::string name_arg);
    ~ScavTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer();
    void getHitPts(void);

private:
    unsigned int hitPts;
    unsigned int maxHitPts;
    unsigned int energyPts;
    unsigned int maxEnergyPts;
    unsigned int Lvl;
    std::string name;
    unsigned int meleeDmg;
    unsigned int rangeDmg;
    unsigned int armorReduction;
};

#endif