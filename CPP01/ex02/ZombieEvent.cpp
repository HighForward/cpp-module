#include "ZombieEvent.hpp"

size_t ZombieEvent::randomize(size_t max, size_t min)
{
    size_t rand_nb = rand() % (max - min + 1) + min;
    return (rand_nb);
}

Zombie *ZombieEvent::randomChump()
{
    std::string voyelle = "aeiouy";
    std::string name = "";
    size_t consonne = 0;
    size_t size = randomize(9, 3);

    for (size_t i = 0; i < size; i++)
    {
        size_t nb = randomize(24, 0);
        std::string c(1, nb + 97);
        if (voyelle.find(c) == std::string::npos)
            consonne++;
        else if (voyelle.find(c) != std::string::npos)
            consonne = 0;
        if (consonne >= 3)
        {
            nb = randomize(5, 0);
            c = voyelle.at(nb);
            consonne = 0;
        }
        name = name + c;
    }
    name[0] = (char)toupper(name[0]);
    Zombie* zombie = new Zombie(name, m_type);
    zombie->advert();
    return (zombie);
}

Zombie ZombieEvent::newZombie(std::string name)
{
    Zombie zombie(name, m_type);
    return (zombie);
}

void ZombieEvent::setZombieType(std::string type)
{
    m_type = type;
}

ZombieEvent::ZombieEvent()
{
	srand(time(NULL));
}

ZombieEvent::~ZombieEvent()
{

}