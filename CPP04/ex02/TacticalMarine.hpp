#ifndef CPP_MODULE_TACTICALMARINE_HPP
#define CPP_MODULE_TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        virtual ~TacticalMarine();
        TacticalMarine(const TacticalMarine &copy);
        TacticalMarine &operator=(const TacticalMarine &copy);

        virtual ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif
