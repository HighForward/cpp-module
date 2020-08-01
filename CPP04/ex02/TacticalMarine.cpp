#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &copy)
{
//    std::cout << "Copy constructor" << std::endl;
    *this = copy;
}

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &copy)
{
//    std::cout << "Assignation operator" << std::endl;
    //if (this != &copy)
    //{
    //what u want
    //}
    return (*this);
}

ISpaceMarine* TacticalMarine::clone() const
{
    return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the Holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* Attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "Attacks with a chainsword *" << std::endl;
}