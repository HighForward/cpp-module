#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon *weapon)
{
    m_name = name;
    m_weapon = weapon;
}

void HumanA::attack()
{
    std::cout << m_name + " attacks with is " + m_weapon->getType() << std::endl;
}