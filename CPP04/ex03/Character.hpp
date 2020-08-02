#ifndef CPP_MODULE_CHARACTER_HPP
#define CPP_MODULE_CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public:
        Character(std::string name);
        ~Character();
        Character(const Character &copy);
        virtual Character &operator=(const ICharacter &copy);

        int getNbMateria();
        int getFreeSpace();

        virtual std::string const & getName() const;
        virtual void equip(AMateria*);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

};

#endif
