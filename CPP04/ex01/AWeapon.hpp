#ifndef CPP_MODULE_AWEAPON_HPP
#define CPP_MODULE_AWEAPON_HPP

#include <iostream>

class AWeapon
{
    public:
        AWeapon(std::string const &name, int damage, int apcost);
		AWeapon(const AWeapon &copy);
		AWeapon &operator=(const AWeapon &copy);
        virtual ~AWeapon();

        std::string const &getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack() const = 0;

	private:
        std::string _name;
		int _damage;
		int _apcost;
};

#endif
