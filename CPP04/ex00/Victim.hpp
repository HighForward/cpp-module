#ifndef CPP_MODULE_VICTIM_HPP
#define CPP_MODULE_VICTIM_HPP

#include <iostream>

class Victim
{
    public:
        Victim(std::string _name);
        ~Victim();
        std::string introduce() const;
        virtual void getPolymorphed() const;

    protected:
        std::string name;
};

std::ostream &operator<<(std::ostream &stream, const Victim &overload);

#endif
