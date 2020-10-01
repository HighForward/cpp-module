#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Clap("Max");
    FragTrap Frag("Maxou");
    ScavTrap Scav("Maxounet");

	std::cout << std::endl;

    Frag.vaulthunter_dot_exe("B2oba");
    Scav.rangedAttack("K2aris");
    Frag.getHitPts();
    Frag.takeDamage(55);
    Scav.challengeNewcomer();

    std::cout << std::endl;
}