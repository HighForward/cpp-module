#include <iostream>
#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine *tom = new TacticalMarine;
	ISpaceMarine *max = new AssaultTerminator;
	ISpaceMarine *tm;
	Squad test;

	test.push(tom);
	test.push(max);
	std::cout << test.getCount() << std::endl;

	tm = test.getUnit(0);
	tm->battleCry();
	tm = test.getUnit(1);
	tm->battleCry();

	std::cout << std::endl;

	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;

	std::cout << std::endl;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;

	ISquad *copy = new Squad(*vlc);

	for (int i = 0; i < copy->getCount(); i++)
	{
		ISpaceMarine* temp = copy->getUnit(i);
		temp->battleCry();
		temp->rangedAttack();
		temp->meleeAttack();
	}

	std::cout << std::endl;

	delete copy;
	delete vlc;

}