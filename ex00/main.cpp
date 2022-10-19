#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	{
		std::cout << "\n\n * ROUND 1: upcasting * " << std::endl;
		const Animal* meta = new Animal();
		const Animal* ap1 = new Dog();/* upcasting */
		const Animal* ap2 = new Cat();/* upcasting */

		std::cout << "\nap1: " << ap1->getType() << std::endl;
		std::cout << "\nap2: " << ap2->getType() << std::endl;

		std::cout << "\nmeta: "; meta->makeSound();
		std::cout << "\nap1: "; ap1->makeSound();
		std::cout << "\nap2: "; ap2->makeSound();

		delete meta;
		delete ap1;
		delete ap2;
	}
	{
		std::cout << "\n\n * ROUND 2: normal animals * " << std::endl;
		const Dog buduk;
		const Cat nabi;
	}
	{
		std::cout << "\n\n * ROUND 3: with no virtual functions * " << std::endl;

		WrongAnimal* meta = new WrongAnimal();
		WrongAnimal* ap1 = new WrongCat();

		std::cout << "\nap1: " << ap1->getType() << std::endl;

		std::cout << "\nmeta: "; meta->makeSound();
		std::cout << "\nap1: "; ap1->makeSound();

		delete meta;
		delete ap1;
	}
}
