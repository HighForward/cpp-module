#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    public:
        Zombie(std::string name, std::string type);
        ~Zombie();
        void advert();

    private:
        std::string m_name;
        std::string m_type;
};

#endif