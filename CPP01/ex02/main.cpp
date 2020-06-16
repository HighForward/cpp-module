#include "ZombieEvent.hpp"

int main(void)
{
    Zombie daniel("Daniel", "Boomer");

    ZombieEvent zombieEvent;
    zombieEvent.setZombieType("Hunter");

    Zombie *denis = zombieEvent.newZombie("Denis");
    Zombie *random = zombieEvent.randomChump();

    daniel.advert();
    denis->advert();

    delete denis;
    delete random;
}