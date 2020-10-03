#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string _name, std::string _title) : name(_name), title(_title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
    *this = copy;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &copy)
{
    if (this != &copy)
    {
		this->name = copy.name;
		this->title = copy.title;
		std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
    }
    return (*this);
}

std::string Sorcerer::introduce() const
{
    std::string full_string = "I am " + name + ", " + title + ", and I like ponies!\n";
    return (full_string);
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream& stream, const Sorcerer &overload)
{
    stream << overload.introduce();
    return (stream);
}
