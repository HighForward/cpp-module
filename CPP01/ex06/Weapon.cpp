#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type)
{
    m_type = type;
}

void Weapon::setType(std::string type)
{
    m_type = type;
}

const std::string& Weapon::getType()
{
    return (m_type);
}