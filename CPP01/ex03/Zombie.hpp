#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        ~Zombie();
        void announce();
        void name(std::string name);

    private:
        std::string m_name;
        std::string m_type;
};

#endif