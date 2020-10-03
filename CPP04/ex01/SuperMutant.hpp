#ifndef CPP_MODULE_SUPERMUTANT_HPP
#define CPP_MODULE_SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        ~SuperMutant();
        SuperMutant(const SuperMutant &copy);
        SuperMutant &operator=(const SuperMutant &copy);
        virtual void takeDamage(int value);
};

#endif
