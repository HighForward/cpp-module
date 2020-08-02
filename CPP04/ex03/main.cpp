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

    delete src;
//    delete moi;
    delete bob;
    std::cout << "\n\n";

    AMateria* blop = new Ice("blop");
    AMateria* copy = new Ice("copy");

    ICharacter* luna = new Character("luna");

    std::cout << copy->getType() << std::endl;
    std::cout << blop->getType() << std::endl << std::endl;

    luna->equip(blop);
    luna->equip(copy);
    luna->use(0, *moi);
    std::cout << blop->getXP() << std::endl;
    luna->use(0, *moi);
    std::cout << blop->getXP() << std::endl << std::endl;

    *copy = *blop;
    std::cout << copy->getType() << std::endl << copy->getXP() << std::endl << std::endl;

    ICharacter *max = new Character("max");
    AMateria* zdra = new Cure("zdra");

    max->equip(zdra);
    std::cout << max->getNbMateria() << std::endl;
    *max = *luna;
    std::cout << max->getNbMateria() << std::endl;

    delete moi;
    delete luna;
    delete max;

}