#ifndef CPP_MODULE_ICE_HPP
#define CPP_MODULE_ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const &type);
        ~Ice();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);

//        Ice(const Ice &copy);
//        Ice &operator=(const Ice &copy);
//        virtual AMateria* clone() const;

};

#endif
