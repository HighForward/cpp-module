#ifndef CPP_MODULE_CURE_HPP
#define CPP_MODULE_CURE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"


class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string const &type);
        ~Cure();
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};

#endif
