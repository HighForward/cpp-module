#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice("freezed cocacola"));
    src->learnMateria(new Cure("rainbow"));

    ICharacter* moi = new Character("moi");
    AMateria* tmp;

    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp = src->createMateria("cure");
    moi->equip(tmp);
    tmp = src->createMateria("freezed cocacola");
    moi->equip(tmp);
    tmp = src->createMateria("rainbow");
    moi->equip(tmp);

    ICharacter* bob = new Character("bob");
    moi->use(0, *bob);
    moi->use(1, *bob);
    moi->use(2, *bob);
    moi->use(3, *bob);

    std::cout << "\n\n";

    AMateria* blop = new Ice("blop");
    AMateria* copy = new Ice("copy");

    ICharacter* luna = new Character("luna");

    *copy = *blop;
    std::cout << copy->getType() << std::endl;

    luna->equip(blop);
    std::cout << blop->getType() << std::endl;
    luna->use(0, *moi);
    std::cout << blop->getXP() << std::endl;
    luna->use(0, *moi);
    std::cout << blop->getXP() << std::endl;


    ICharacter *max = new Character("max");
    *max = *luna;

    AMateria* zdra = new Cure("zdra");

}