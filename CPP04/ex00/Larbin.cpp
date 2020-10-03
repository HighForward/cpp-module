#include "Larbin.hpp"

Larbin::Larbin(std::string name) : Victim(name)
{
	std::cout << "ATCHAWATCHA" << std::endl;
}

Larbin::~Larbin()
{
	std::cout << "blopblop" << std::endl;
}

Larbin::Larbin(const Larbin &copy) : Victim(copy.name)
{
	std::cout << "ATCHAWATCHA" << std::endl;
	*this = copy;
}

Larbin &Larbin::operator=(const Larbin &copy)
{
	std::cout << "Assignation operator" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
	}
	return (*this);
}
void Larbin::getPolymorphed() const
{
	std::cout << name << " has been turned into a blue frog !" << std::endl;
}
