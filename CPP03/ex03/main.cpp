#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    ClapTrap Clap("Max");
    FragTrap Frag("Maxou");
    ScavTrap Scav("Maxounet");
    NinjaTrap Ninja("Maximum");

    NinjaTrap NinjaViolent("AuMaxDuMax");

    std::cout << std::endl << std::endl;
    NinjaViolent.ninjaShoebox(Frag);
    NinjaViolent.ninjaShoebox(Scav);
    NinjaViolent.ninjaShoebox(Ninja);
    std::cout << std::endl << std::endl;
}