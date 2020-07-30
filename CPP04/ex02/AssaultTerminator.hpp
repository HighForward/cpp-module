#ifndef CPP_MODULE_ASSAULTTERMINATOR_HPP
#define CPP_MODULE_ASSAULTTERMINATOR_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        virtual ~AssaultTerminator();
        AssaultTerminator(const AssaultTerminator &copy);
        AssaultTerminator &operator=(const AssaultTerminator &copy);

        virtual ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};

#endif
