#ifndef CPP_MODULE_AMATERIA_HPP
#define CPP_MODULE_AMATERIA_HPP

#include <iostream>
class ICharacter;

class AMateria
{
    public:
        AMateria(std::string const &type);
        virtual ~AMateria();
        AMateria(const AMateria &copy);
        AMateria& operator=(const AMateria &copy);

        std::string const &getType() const;
        unsigned int getXP() const;
        unsigned int xpFeeder();
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);

    protected:
        std::string _type;
        unsigned int _xp;

};

#endif
