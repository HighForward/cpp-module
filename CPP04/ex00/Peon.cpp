#include "Peon.hpp"

Peon::Peon(std::string _name) : Victim(_name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << name << "was just polymorphed into a pink pony!" << std::endl;
}