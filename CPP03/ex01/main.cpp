#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ScavTrap Scav("Jammy");
    FragTrap Frag("Fred");

    std::cout << std::endl;

    Scav.rangedAttack("Papy Brossard");
    Scav.meleeAttack("Papy Brossard");
    Scav.takeDamage(50);
    Scav.beRepaired(20);
    Scav.challengeNewcomer();

    std::cout << std::endl;

    Frag.rangedAttack("Papy Brossard");
    Frag.meleeAttack("Papy Brossard");
    Frag.takeDamage(50);
    Frag.beRepaired(20);
    Frag.vaulthunter_dot_exe("Papy Brossard");
}