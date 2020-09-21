#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include "Zombie.hpp"

class ZombieEvent
{
    public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string type);
    size_t randomize(size_t max, size_t min);
    Zombie newZombie(std::string name);
    Zombie *randomChump();

    private:
    std::string m_type;
};

#endif