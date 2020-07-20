#ifndef CPP_MODULE_AWEAPON_HPP
#define CPP_MODULE_AWEAPON_HPP

#include <iostream>

class AWeapon
{
    public:
        AWeapon(std::string const &name, int apcost, int damage);
        virtual ~AWeapon();

        std::string getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

    protected:
        std::string _name;
        int _apcost;
        int _damage;
};

#endif
