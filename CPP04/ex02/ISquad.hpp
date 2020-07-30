#ifndef CPP_MODULE_ISQUAD_HPP
#define CPP_MODULE_ISQUAD_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
    public:
        ISquad();
        virtual ~ISquad();
        ISquad(const ISquad &copy);
        ISquad &operator=(const ISquad &copy);

        virtual int getCount() const = 0;
        virtual ISpaceMarine* getUnit(int) const = 0;
        virtual int push(ISpaceMarine*) = 0;

};

#endif
