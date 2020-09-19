#include "ZombieEvent.hpp"

int main(void)
{
    Zombie Alfred("Alfred", "Boomer");
	Alfred.advert();

	ZombieEvent zombieEvent;
	zombieEvent.setZombieType("Hunter");

	Zombie Samy = zombieEvent.newZombie("Samy");
	Samy.advert();

	Zombie *Random = zombieEvent.randomChump();

    delete Random;
}