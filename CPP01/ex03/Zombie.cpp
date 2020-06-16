#include "Zombie.hpp"

void Zombie::name(std::string name)
{
    m_name = name;
}

void Zombie::announce()
{
    std::cout << "<" + m_name + " (" + m_type + ")> Areghhegrghhhhrhgggh ..." << std::endl;
}

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name, std::string type)
{
    m_name = name;
    m_type = type;
}

Zombie::~Zombie()
{

}