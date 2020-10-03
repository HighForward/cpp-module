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
	AMateria *ice = new Ice;
	AMateria *ice2 = new Ice(*ice);
	AMateria *cure = new Cure(*ice);
	Character max("Max");

	std::cout << ice->getType() << std::endl;
	std::cout << ice2->getType() << std::endl;
	std::cout << cure->getType() << std::endl;

	std::cout << ice->getXP() << std::endl << cure->getXP() << std::endl;
	cure->use(max);
	*ice = *cure;
	std::cout << ice->getXP() << std::endl << cure->getXP() << std::endl;

	std::cout << std::endl;

	Character johnny("johnny");

	std::cout << max.getNbMateria() << std::endl;
	max.equip(ice);
	max.equip(cure);
	max.equip(ice2);
	std::cout << max.getNbMateria() << std::endl;
	max.use(0, johnny);
	max.use(1, johnny);
	max.use(2, johnny);

	std::cout << std::endl << std::endl;


	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* moi = new Character("Moi");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);

	ICharacter* bob = new Character("Bob");

	moi->use(0, *bob);
	moi->use(1, *bob);
	delete bob;
	delete moi;
	delete src;
}