#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H
#include <random>
#include "Zombie.hpp"

class ZombieHorde {

public:
    ZombieHorde(int n);
    ~ZombieHorde();
    std::string randomize_name();
    size_t randomize(size_t max, size_t min);
    void announce();

private:
    int m_n;
    Zombie *m_zombie;
};


#endif
