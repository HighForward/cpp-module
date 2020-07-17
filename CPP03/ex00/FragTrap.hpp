#include <iostream>

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
    int hitPts;
    int maxHitPts;
    int energyPts;
    int maxEnergyPts;
    int Lvl;
    std::string name;
    int meleeDmg;
    int rangeDmg;
    int armorReduction;
    int vaulthunter;
};