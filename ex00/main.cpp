#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/* upcasting, virtual function, overriding */

int main() {
	{
		std::cout << "\n\n * ROUND 1: normal animals * " << std::endl;
		const Dog buduk; std::cout << "\n"; 
		const Cat nabi; std::cout << "\n"; 
	}
	{
		std::cout << "\n\n * ROUND 2: with no virtual functions * " << std::endl;

		WrongAnimal* meta = new WrongAnimal(); std::cout << "\n"; 
		WrongAnimal* ap1 = new WrongCat(); std::cout << "\n"; 

		std::cout << "\nap1: " << ap1->getType() << std::endl;

		std::cout << "\nmeta: "; meta->makeSound();
		std::cout << "\nap1: "; ap1->makeSound();// WrongCat's makeSound() should be called but..

		delete meta; std::cout << "\n";
		delete ap1; std::cout << "\n";// WrongCat's destructor should be called but..
	}
	{
		std::cout << "\n\n * ROUND 3: upcasting (^_^) * " << std::endl;
		const Animal* meta = new Animal(); std::cout << "\n"; 
		const Animal* ap1 = new Dog(); std::cout << "\n";//upcasting! 
		const Animal* ap2 = new Cat(); std::cout << "\n";//upcasting! 

		std::cout << "\nap1: " << ap1->getType() << std::endl;// Dog's getType() is called!
		std::cout << "\nap2: " << ap2->getType() << std::endl;

		std::cout << "\nmeta: "; meta->makeSound();
		std::cout << "\nap1: "; ap1->makeSound();// Dog's makeSound() is called!
		std::cout << "\nap2: "; ap2->makeSound();

		delete meta; std::cout << "\n"; 
		delete ap1; std::cout << "\n";// Dog's destructor is called!
		delete ap2; std::cout << "\n"; 
	}
}
