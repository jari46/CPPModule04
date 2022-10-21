#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(const Dog& src);
		Dog& operator=(const Dog& src);
		virtual ~Dog();/* virtual */

		virtual void makeSound(void) const;/* virtual */
};

#endif /* DOG_HPP */
