#ifndef CPP_MODULE_ICE_HPP
#define CPP_MODULE_ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
		Ice(const AMateria &copy);
		Ice& operator=(const Ice &copy);
        ~Ice();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif
