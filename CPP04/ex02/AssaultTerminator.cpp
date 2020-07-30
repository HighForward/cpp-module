#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const
{

}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. Purify it!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "Attacks with chainfists *" << std::endl;
}