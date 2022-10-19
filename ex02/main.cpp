#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
	{
		std::cout << "\n\n * ROUND 1: inherit from abstract class * " << std::endl;
		// Animal meta;/* Error: object of abstract class type "Animal" is not allowed */
		Dog baduk;
		std::cout << "\nbaduk: "; baduk.makeSound();
		Cat nabi;
		std::cout << "\nnabi: "; nabi.makeSound();
	}
	{
		std::cout << "\n\n * ROUND 2: pointer of abstract class * " << std::endl;
		Animal* baduk = new Dog();
		std::cout << "\nbaduk: "; baduk->makeSound();

		Animal* nabi = new Cat();
		std::cout << "\nnabi: "; nabi->makeSound();

		delete baduk;
		delete nabi;
	}
}
