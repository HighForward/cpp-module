#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
public:
    NinjaTrap(std::string name_arg);
    ~NinjaTrap();
    void ninjaShoebox(FragTrap &temp);
    void ninjaShoebox(ScavTrap &temp);
    void ninjaShoebox(NinjaTrap &temp);
private:
};

#endif