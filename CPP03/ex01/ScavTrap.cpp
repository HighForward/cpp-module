#include "ScavTrap.hpp"
#include "../ex03/ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name_arg)
{
    hitPts = 100;
    maxHitPts = 100;
    energyPts = 50;
    maxEnergyPts = 50;
    Lvl = 1;
    name = name_arg;
    meleeDmg = 20;
    rangeDmg = 15;
    armorReduction = 3;
    std::cout << name << ": Salut à tous les amis c'est Diablox9" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Blop blop blop blop blop blop blop blop..." << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "ScavTrap " << name << " fait du sale à distance, " << target << " prend " << rangeDmg << " dégâts." << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " fait du sale au corp à corp, " << target << " prend " << rangeDmg << " dégâts." << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "EH CA FAIT MAL OUESH !" << std::endl;
    if ((amount - armorReduction) > hitPts)
        hitPts = 0;
    else
        hitPts = hitPts - (amount - armorReduction);
    std::cout << "Points de vie : " << hitPts << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "PZIOUUUZUUZZUZIZIZIZI (c'est le bruit quand ça répare)" << std::endl;
    if (hitPts + amount > 100)
        hitPts = 100;
    else
        hitPts = hitPts + amount;
    std::cout << "Points de vie : " << hitPts << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::string challenges[] = { "Pile ou face ?", "Shi Fu Mi ?", "Bras de fer ?", "BlackJack" };
    srand(time(NULL));
    std::cout << "FR4G-TP challenge avec " << challenges[rand() % 4] << std::endl;
}
void ScavTrap::getHitPts(void)
{
	std::cout << "Points de vie : " << hitPts << std::endl;
}