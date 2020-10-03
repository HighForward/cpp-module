#include "FragTrap.hpp"

int main(void)
{
    FragTrap Frag("Fragilito");

    Frag.rangedAttack("Papa Johnny");
    Frag.meleeAttack("Papa Johnny");
    Frag.takeDamage(50);
    Frag.beRepaired(20);
    Frag.vaulthunter_dot_exe("Papa Johnny");
}