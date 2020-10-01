#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>

class FragTrap
{
public:
    FragTrap(std::string name_arg);
    ~FragTrap();
    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const &target);

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
    unsigned int vaulthunter;
};

#endif