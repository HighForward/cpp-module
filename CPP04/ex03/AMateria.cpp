#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type)
{
    _xp = 0;
    _type = type;
}

AMateria::~AMateria()
{
    std::cout << "Destructor" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    *this = copy;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    if (this != &copy)
    {
        this->_xp = copy.getXP();
        this->_type = copy.getType();
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

void AMateria::use(ICharacter& target)
{

}

unsigned int AMateria::xpFeeder()
{
    return (10);
}