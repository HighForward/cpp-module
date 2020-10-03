#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}


Ice::~Ice()
{

}


Ice::Ice(const AMateria &copy) : AMateria(copy)
{
	this->_type = "ice";
}

Ice &Ice::operator=(const Ice &copy)
{
	if (this != &copy)
	{
		std::cout << "cmoi" << std::endl;
		this->_xp = copy._xp;
	}
	return (*this);
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
	AMateria::use(target);
}
