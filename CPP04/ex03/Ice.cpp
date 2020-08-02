#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(std::string const &type) : AMateria(type)
{

}

Ice::~Ice()
{
    std::cout << "Destructor" << std::endl;
}


AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
    _xp += xpFeeder();
}