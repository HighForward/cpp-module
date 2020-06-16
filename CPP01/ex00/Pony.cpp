#include "Pony.hpp"

Pony::Pony(std::string name)
{
    std::cout << name + "created" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony deleted" << std::endl;
}