#ifndef CPP_MODULE_SORCERER_HPP
#define CPP_MODULE_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
    public:
        Sorcerer(std::string _name, std::string _title);
        ~Sorcerer();
        Sorcerer(const Sorcerer &copy);
        Sorcerer &operator=(const Sorcerer &copy);
        std::string introduce() const;
        void polymorph(Victim const &victim) const;

    protected:
        std::string name;
        std::string title;
};

std::ostream &operator<<(std::ostream &stream, const Sorcerer &overload);

#endif
