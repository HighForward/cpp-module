#ifndef MODULE_CPP_NINJATRAP_HPP
#define MODULE_CPP_NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public:
		NinjaTrap(std::string name_arg);
		~NinjaTrap();
		void ninjaShoebox(FragTrap &temp);
		void ninjaShoebox(ScavTrap &temp);
		void ninjaShoebox(NinjaTrap &temp);
		void ninjaShoebox(ClapTrap &temp);
};

#endif
