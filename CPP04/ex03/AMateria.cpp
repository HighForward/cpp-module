#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type)
{
    _xp = 0;
    _type = type;
}

AMateria::~AMateria()
{

}

AMateria::AMateria(const AMateria &copy)
{
	this->_xp = copy.getXP();

}

AMateria &AMateria::operator=(const AMateria &copy)
{

	if (this != &copy)
    {
        this->_xp = copy.getXP();
    }
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (_type);
}

unsigned int AMateria::getXP() const
{
    return (_xp);
}

unsigned int AMateria::xpFeeder()
{
	return (10);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += xpFeeder();
}
