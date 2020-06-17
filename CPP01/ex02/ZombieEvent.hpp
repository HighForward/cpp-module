#include <iostream>
#include <string>
#include <random>
#include "Zombie.hpp"

class ZombieEvent
{
    public:
    ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string type);
    size_t randomize(size_t max, size_t min);
    Zombie *newZombie(std::string name);
    Zombie *randomChump();

    private:
    std::string m_type;
};