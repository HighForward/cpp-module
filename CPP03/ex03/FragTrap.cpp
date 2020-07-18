#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_arg) : ClapTrap(name_arg)
{
    hitPts = 100;
    maxHitPts = 100;
    energyPts = 100;
    maxEnergyPts = 100;
    Lvl = 1;
    meleeDmg = 30;
    rangeDmg = 20;
    armorReduction = 5;
    std::cout << "FragTrap: " << name_arg << ": Construction" << std::endl;
    vaulthunter = 50;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destruction" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
    std::string attacks[] = { "Lancer de pieces", "Invocation de Guppy", "PIKKAAAAAACHUUUUUU", "J'apprecie à moitié", "Rien" };
    if (energyPts < 25)
        std::cout << "Vidange nécessaire" << std::endl;
    else
    {
        srand(time(NULL));
        std::cout << name << " attaque " << target << " avec " << attacks[rand() % 5] << ", causant " << vaulthunter << " points de dégâts !" << std::endl;
    }
}