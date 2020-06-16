#include "Zombie.hpp"

void Zombie::advert()
{
    std::cout << "<" + m_name + " (" + m_type + ")> Areghhegrghhhhrhgggh ..." << std::endl;
}

Zombie::Zombie(std::string name, std::string type)
{
    m_name = name;
    m_type = type;
}

Zombie::~Zombie()
{

}