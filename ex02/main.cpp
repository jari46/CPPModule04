#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
	{
		std::cout << "\n\n * ROUND 1:  * " << std::endl;
		// Animal meta;/* Error: object of abstract class type "Animal" is not allowed */
		Cat nabi;
		std::cout << "\nnabi: "; nabi.makeSound();
		Dog baduk;
		std::cout << "\nbaduk: "; baduk.makeSound();
	}
}
