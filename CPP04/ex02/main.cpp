#include <iostream>
#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
    ISpaceMarine *bob = new TacticalMarine;
    ISpaceMarine *gth = new TacticalMarine;
    ISpaceMarine *frd = new TacticalMarine;
    ISpaceMarine *jak = new AssaultTerminator;
    ISpaceMarine *sxw = new AssaultTerminator;
    ISpaceMarine *yhj = new AssaultTerminator;

    ISquad *vlc = new Squad;

    std::cout << vlc->getCount() << std::endl;
    vlc->push(bob);
    vlc->push(gth);
    vlc->push(frd);
    vlc->push(jak);
//    vlc->push(jak);
    vlc->push(yhj);
    vlc->push(sxw);
    std::cout << std::endl << std::endl;

    for (int i = 0; i < vlc->getCount(); i++)
    {
        ISpaceMarine *curr = vlc->getUnit(i);
        curr->battleCry();
        curr->rangedAttack();
        curr->meleeAttack();
    }
    std::cout << vlc->getCount() << std::endl << std::endl << std::endl;

//    ISpaceMarine *zer = sxw->clone();
//    delete zer;

    ISquad *copy = new Squad(*vlc);

    for (int i = 0; i < vlc->getCount(); i++)
    {
        ISpaceMarine *cur = copy->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << copy->getCount() << std::endl << std::endl << std::endl;

    ISquad *test = new Squad;
    ISpaceMarine *tm = new TacticalMarine;
    ISpaceMarine *at = new AssaultTerminator;
    test->push(tm);
    test->push(at);
    *test = *copy;

    for (int i = 0; i < test->getCount(); i++)
    {
        ISpaceMarine *currr = test->getUnit(i);
        currr->battleCry();
        currr->rangedAttack();
        currr->meleeAttack();
    }
    std::cout << copy->getCount() << std::endl << std::endl << std::endl;

    delete copy;
    delete vlc;
    delete test;
}