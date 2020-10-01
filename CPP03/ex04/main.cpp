#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	NinjaTrap Ninja("Bruce Lee");
	FragTrap Frag("Kim Jong Un");

	std::cout << std::endl << std::endl;

	SuperTrap Super("Max");
	Super.vaulthunter_dot_exe("TheFantasio974");
	Super.ninjaShoebox(Ninja);
	
	std::cout << std::endl << std::endl;
}