#include <iostream>
#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *jak = new AssaultTerminator;

    ISquad *vlc = new Squad;
    std::cout << vlc->getCount() << std::endl;
    vlc->push(bob);
    vlc->push(jak);

    for (int i = 0; i < vlc->getCount(); i++)
    {
        ISpaceMarine *curr = vlc->getUnit(i);
        curr->battleCry();
        curr->rangedAttack();
        curr->meleeAttack();
    }
    std::cout << vlc->getCount() << std::endl;
    delete vlc;
}