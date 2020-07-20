#ifndef CPP_MODULE_PEON_HPP
#define CPP_MODULE_PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon(std::string _name);
        ~Peon();
        virtual void getPolymorphed() const;

};

#endif
