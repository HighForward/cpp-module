#include "Brain.hpp"

std::string Brain::identify()
{
    std::stringstream buffer;
    std::string address;

    buffer << this;
    address = buffer.str();

    return (address);
}