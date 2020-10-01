#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string name_arg);
    ~FragTrap();
    void vaulthunter_dot_exe(std::string const &target);

private:
    int vaulthunter;
};

#endif