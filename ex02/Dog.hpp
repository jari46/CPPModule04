#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain *_brainPTR;

	public:
		Dog();
		Dog(const Dog& src);
		Dog& operator=(const Dog& src);
		virtual ~Dog();

		virtual void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif /* DOG_HPP */
