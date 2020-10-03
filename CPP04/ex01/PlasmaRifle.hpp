#ifndef CPP_MODULE_PLASMARIFLE_HPP
#define CPP_MODULE_PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &copy);
		PlasmaRifle &operator=(const PlasmaRifle &copy);
        virtual ~PlasmaRifle();
        virtual void attack() const;

};

#endif
