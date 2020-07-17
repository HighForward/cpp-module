#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap Clap("Max");
    FragTrap Frag("Maxou");
    ScavTrap Scav("Maxounet");


    Frag.vaulthunter_dot_exe("Gradur");
    Frag.rangedAttack("Kaaris");
    Frag.takeDamage(55);
    Scav.challengeNewcomer();
}