#include "ZombieHorde.hpp"

size_t ZombieHorde::randomize(size_t max, size_t min)
{
    std::random_device rd;

    size_t rand_nb = rd() % (max - min + 1) + min;
    return (rand_nb);
}

std::string ZombieHorde::randomize_name()
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
    return (name);
}

void ZombieHorde::announce()
{
    while (m_n--)
        m_zombie[m_n].announce();
}

ZombieHorde::ZombieHorde(int n) : m_n(n)
{
    m_zombie = new Zombie[n];
    while (n--)
        m_zombie[n].name(randomize_name());

}

ZombieHorde::~ZombieHorde()
{
    delete[] m_zombie;
}