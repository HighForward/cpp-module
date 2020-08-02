#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(std::string const &type) : AMateria(type)
{

}

Cure::~Cure()
{
    std::cout << "Destructor" << std::endl;
}

//Cure::Cure(const Cure &copy)
//{
//    std::cout << "Copy constructor" << std::endl;
//    *this = copy;
//}

//Cure &Cure::operator=(const Cure &AMateria)
//{
//    std::cout << "Assignation operator" << std::endl;
//    if (this != &copy)
//    {
//    }
//    return (*this);
//}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" <<std::endl;
    _xp += getXP();
}