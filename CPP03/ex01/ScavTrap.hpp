#include <iostream>

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

private:
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