#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name_arg)
{
    hitPts = 100;
    maxHitPts = 100;
    energyPts = 100;
    maxEnergyPts = 100;
    Lvl = 1;
    name = name_arg;
    meleeDmg = 30;
    rangeDmg = 20;
    armorReduction = 5;
    vaulthunter = 50;
    std::cout << name << ": Oh shit, here we go again" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "kkrkrkrk *blowing up*" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << name << " attaque " << target << " à distance, causant " << rangeDmg << " points de dégâts !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
    std::cout << "FR4G-TP " << name << " attaque " << target << " à distance, causant " << meleeDmg << " points de dégâts !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "Aïe !" << std::endl;
    if ((amount - armorReduction) > hitPts)
        hitPts = 0;
    else
        hitPts = hitPts - (amount - armorReduction);
    std::cout << "Points de vie : " << hitPts << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "Restauration des points de vie" << std::endl;
    if (hitPts + amount > 100)
        hitPts = 100;
    else
        hitPts = hitPts + amount;
    std::cout << "Points de vie : " << hitPts << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{

    std::string attacks[] = { "Lancer de pieces", "Invocation de Guppy", "PIKKAAAAAACHUUUUUU", "J'apprecie à moitié", "Rien" };
    if (energyPts < 25)
        std::cout << "Out of energy =(" << std::endl;
    else
    {
        srand(time(NULL));
        std::cout << "FR4G-TP " << name << " attaque " << target << " avec " << attacks[rand() % 5] << ", causant " << vaulthunter << " points de dégâts !" << std::endl;
    }
}