#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy)
{
    *this = copy;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &copy)
{
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}

void SuperMutant::takeDamage(int value)
{
    _hp = _hp - (value > 3 ? value - 3 : 0);
    std::cout << _hp << std::endl;
}
