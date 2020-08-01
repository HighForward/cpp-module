#include "ISquad.hpp"

ISquad::ISquad()
{
    squad = NULL;
}

ISquad::~ISquad()
{

}

ISquad &ISquad::operator=(const ISquad &copy)
{
    std::cout << "Assignation operator" << std::endl;
    return (*this);
}

