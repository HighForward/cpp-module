#ifndef CPP_MODULE_ISPACEMARINE_HPP
#define CPP_MODULE_ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{
    public:
        ISpaceMarine();
        virtual ~ISpaceMarine();
        ISpaceMarine(const ISpaceMarine &copy);
        ISpaceMarine &operator=(const ISpaceMarine &copy);

        virtual ISpaceMarine* clone() const = 0;
        virtual void battleCry() const = 0;
        virtual void rangedAttack() const = 0;
        virtual void meleeAttack() const = 0;
};

#endif
