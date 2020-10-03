#include "Peon.hpp"

Peon::Peon(std::string _name) : Victim(_name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy) : Victim(copy.name)
{
	std::cout << "Zog zog." << std::endl;
	*this = copy;
}

Peon &Peon::operator=(const Peon &copy)
{
	if (this != &copy)
	{
		this->name = copy.name;
	}
	return (*this);
}

void Peon::getPolymorphed() const
{
    std::cout << name << " was just polymorphed into a pink pony!" << std::endl;
}
