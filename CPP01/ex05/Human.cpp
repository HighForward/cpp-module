#include "Human.hpp"

std::string Human::identify() const
{
    return (this->brain.identify());
}

const Brain &Human::getBrain() const
{
    return (this->brain);
}

Human::Human()
{

}

Human::~Human()
{

}