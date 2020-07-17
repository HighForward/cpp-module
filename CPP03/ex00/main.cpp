#include "FragTrap.hpp"

int main(void)
{
    FragTrap Frag("Franco");

    Frag.rangedAttack("Papy Brossard");
    Frag.meleeAttack("Papy Brossard");
    Frag.takeDamage(50);
    Frag.beRepaired(20);
    Frag.vaulthunter_dot_exe("Papy Brossard");
}