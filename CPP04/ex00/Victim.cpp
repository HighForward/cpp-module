#include "Victim.hpp"

Victim::Victim(std::string _name) : name(_name)
{
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "The victim " << name << " died for no apparent reasons!" << std::endl;
}

std::string Victim::introduce() const
{
    std::string full_string = "I am " + name + " and I like otters!\n";
    return (full_string);
}

void Victim::getPolymorphed() const
{
    std::cout << name << " was just polymorphed into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream& stream, const Victim &overload)
{
    stream << overload.introduce();
    return (stream);
}
