#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Larbin.hpp"

int main(void)
{
    Sorcerer robert("Robert", "The Magnificient");
    Sorcerer johnny(robert);

	Victim jim("Jim");
	Peon joe("Joe");
	Larbin jack("Jack");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(jack);
}