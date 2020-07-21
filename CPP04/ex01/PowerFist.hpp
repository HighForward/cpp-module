#ifndef CPP_MODULE_POWERFIST_HPP
#define CPP_MODULE_POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        ~PowerFist();
        virtual void attack() const;

};

#endif
