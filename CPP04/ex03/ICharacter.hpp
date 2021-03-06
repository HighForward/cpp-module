#ifndef CPP_MODULE_ICHARACTER_HPP
#define CPP_MODULE_ICHARACTER_HPP

#include <iostream>
class AMateria;

class ICharacter
{
    public:
        virtual ~ICharacter();
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria*) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
        virtual AMateria *getMaterias(int index) const = 0;
        virtual int getNbMateria() = 0;

    protected:
        std::string _name;
        AMateria *materia[4];
};

#endif
