#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::~Cure()
{

}

Cure::Cure(const AMateria &copy) : AMateria(copy)
{
	this->_type = "cure";
}

Cure &Cure::operator=(const Cure &copy)
{
	if (this != &copy)
	{
		std::cout << "cmoi1" << std::endl;
		this->_xp = copy._xp;
	}
	return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" <<std::endl;
    AMateria::use(target);
}
