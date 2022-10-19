#include <iostream>

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define ARR_LEN 6

int main() {
	{
		std::cout << "\n\n * ROUND 1: Brain class * " << std::endl;

		/* basic usage */
		Brain brain1;

		std::cout << "brain1: "; brain1.displayIdeas();
		brain1.setIdeas("perfect", 4);
		std::cout << "brain1: "; brain1.displayIdeas();

		/* insertion operator copy all content */
		Brain brain2;

		brain2 = brain1;
		std::cout << "brain2: "; brain2.displayIdeas();
	}
	{
		std::cout << "\n\n * ROUND 2: Cat class with Brain class * " << std::endl;
		Cat nabi;

		nabi.getBrain()->setIdeas("nabi's", 5);
		std::cout << "nabi: "; nabi.getBrain()->displayIdeas();

		/* cat class' insertion operator(=) do brain class insertion too */
		Cat kitty;
		kitty = nabi;
		std::cout << "yaong: "; kitty.getBrain()->displayIdeas();

		/* nabi and kitty have their own Brain class */
		kitty.getBrain()->setIdeas("kitty's", 5);
		std::cout << "nabi: "; nabi.getBrain()->displayIdeas();
		std::cout << "kitty: "; kitty.getBrain()->displayIdeas();

		/* copy constructor also works */
		Cat yaong(nabi);
		std::cout << "nabi: "; nabi.getBrain()->displayIdeas();
		std::cout << "yaong: "; yaong.getBrain()->displayIdeas();
		yaong.getBrain()->setIdeas("new", 5);
		std::cout << "nabi: "; nabi.getBrain()->displayIdeas();
		std::cout << "yaong: "; yaong.getBrain()->displayIdeas();
	}
	{
		std::cout << "\n\n * ROUND 3: an array of dogs and cats * " << std::endl;

		/* make an array */
		const Animal *animalARR[ARR_LEN];

		for (int i = 0; i < ARR_LEN; i++) {
			if (i / (ARR_LEN / 2)  < 1) {
				animalARR[i] = new Dog;
				std::cout << std::endl;
			}
			else {
				animalARR[i] = new Cat;
				std::cout << std::endl;
			}
		}

		/* dog and cat class can use their own function */
		for (int i = 0; i < ARR_LEN; i++) {
			std::cout << "\nanimal " << i << ": "; animalARR[i]->makeSound();
		}

		/* destructors of dog or cat is called */
		for (int i = 0; i < ARR_LEN; i++) {
			delete animalARR[i];
			std::cout << std::endl;
		}
	}
}
