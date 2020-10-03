#ifndef CPP_MODULE_CHARACTER_HPP
#define CPP_MODULE_CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
    public:
        Character(std::string const &name);
        ~Character();
        Character(const Character &copy);
        Character &operator=(const Character &copy);

		void recoverAP();
		void equip(AWeapon *weapon);
		void attack(Enemy *enemy);
		std::string const &getName() const;
		int getAP() const;

        std::string getWeaponName() const;
        int gotWeapon() const;

    protected:
        std::string _name;
        int _AP;
        AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &stream, const Character &overload);

#endif
