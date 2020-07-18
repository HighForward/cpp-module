#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
    FragTrap(std::string name_arg);
    ~FragTrap();
    void vaulthunter_dot_exe(std::string const &target);

private:
    int vaulthunter;
};

#endif