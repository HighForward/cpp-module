#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap Scav("Diablox9");
    FragTrap Frag("Fragito");

    std::cout << std::endl;

    Scav.rangedAttack("The Guys over here");
    Scav.meleeAttack("The Guys over here");
    Scav.getHitPts();
    Scav.takeDamage(50);
    Scav.beRepaired(20);
    Scav.challengeNewcomer();

    std::cout << std::endl;

    Frag.rangedAttack("Papa Johnny");
    Frag.meleeAttack("Papa Johnny");
    Frag.takeDamage(50);
    Frag.beRepaired(20);
    Frag.vaulthunter_dot_exe("Papa Johnny");
}