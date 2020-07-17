#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name_arg) : ClapTrap(name_arg)
{
    std::cout << "ScavTrap: " << name_arg << ": Construction" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destruction" << std::endl;
}

void ScavTrap::challengeNewcomer()
{
    std::string challenges[] = { "Pile ou face ?", "Shi Fu Mi ?", "Bras de fer ?", "1, 2, 3, ROI DU SILENCE" };
    srand(time(NULL));
    std::cout << "FR4G-TP challenge avec " << challenges[rand() % 4] << std::endl;
}