#include "ISquad.hpp"

ISquad::ISquad()
{

}

ISquad::~ISquad()
{

}

ISquad::ISquad(const ISquad &copy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

ISquad &ISquad::operator=(const ISquad &copy)
{
    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}