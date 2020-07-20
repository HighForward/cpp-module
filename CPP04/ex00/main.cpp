#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
    Sorcerer Robert("Robert", "The Crazy Sorcerer");
    Victim Dany("Dany");
    Peon Jordz("Jordz");

    std::cout << std::endl;

    std::cout << Robert << Dany << Jordz;

    std::cout << std::endl;

    Robert.polymorph(Dany);
    Robert.polymorph(Jordz);

    std::cout << std::endl;
}