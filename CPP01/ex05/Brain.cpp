#include "Brain.hpp"

std::string Brain::identify() const
{
    std::stringstream buffer;
    std::string address;

    buffer << this;
    address = buffer.str();

    return (address);
}