#include "ICharacter.hpp"
#include "AMateria.hpp"

ICharacter::~ICharacter()
{

}

//ICharacter::ICharacter(const ICharacter &copy)
//{
//    std::cout << "Copy constructor" << std::endl;
//    *this = copy;
//}
//
ICharacter &ICharacter::operator=(const ICharacter &copy)
{
    std::cout << "Assignation ogfdgfdperator" << std::endl;
//    if (this != &copy)
//    {
//    }
//    return (*this);
//    AMateria *temp = copy.getMaterias();
}