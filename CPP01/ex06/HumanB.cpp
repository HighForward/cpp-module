#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    m_name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << m_name + " attacks with is " + m_weapon->getType() << std::endl;
}