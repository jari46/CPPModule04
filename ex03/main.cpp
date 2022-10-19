#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// learn, create materias
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// equip, use meterias
#include "ICharacter.hpp"
#include "Character.hpp"

int main() {
	std::cout << "\n * ROUND 1: create book and learn * " << std::endl;
	IMateriaSource* srcBook = new MateriaSource();
	srcBook->learnMateria(new Ice());
	srcBook->learnMateria(new Cure());

	std::cout << "\n * ROUND 2: create ME, create materias, equip materias * " << std::endl;
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = srcBook->createMateria("ice");//new!
	me->equip(tmp);//idx 0

	tmp = srcBook->createMateria("cure");//new!
	me->equip(tmp);//idx 1

	tmp = srcBook->createMateria("cure");//new!
	me->equip(tmp);//idx 2

	std::cout << "\n * ROUND 3: create BOB, use materias * " << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << "    "; me->use(0, *bob);
	std::cout << "    "; me->use(1, *bob);
	std::cout << "    "; me->use(2, *bob);

	std::cout << "\n * ROUND 4: unequip materias * " << std::endl;
	AMateria* floor0 = me->keepEquipment(0);
	me->unequip(0);//to NULL
	AMateria* floor1 = me->keepEquipment(1);
	me->unequip(1);//to NULL
	AMateria* floor2 = me->keepEquipment(2);
	me->unequip(2);//to NULL

	me->equip(floor0);
	floor0 = NULL;
	me->equip(floor1);
	floor1 = NULL;
	std::cout << "    "; me->use(0, *bob);

	std::cout << "\n * delete lefted materias * " << std::endl;
	delete floor0;//free NULL
	delete floor1;//free NULL
	delete floor2;

	std::cout << "\n * delete src book * " << std::endl;
	delete srcBook;

	std::cout << "\n * delete humans * " << std::endl;
	delete me;
	delete bob;

	return 0;
}
