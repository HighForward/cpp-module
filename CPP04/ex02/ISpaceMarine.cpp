#include "ISpaceMarine.hpp"

ISpaceMarine::ISpaceMarine()
{

}

ISpaceMarine::~ISpaceMarine()
{

}

ISpaceMarine::ISpaceMarine(const ISpaceMarine &copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

ISpaceMarine &ISpaceMarine::operator=(const ISpaceMarine &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}