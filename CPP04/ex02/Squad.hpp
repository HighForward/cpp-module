#ifndef CPP_MODULE_SQUAD_HPP
#define CPP_MODULE_SQUAD_HPP

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
    public:
        Squad();
        virtual ~Squad();
        Squad(const ISquad &copy);
        Squad &operator=(const ISquad &copy);

        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int) const;
        virtual int push(ISpaceMarine*);
};

#endif
