#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
    SuperTrap(std::string name);
    ~SuperTrap();

private:

};

#endif