#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal& src);
		Animal& operator=(const Animal& src);
		virtual ~Animal();/* virtual */

		std::string getType(void) const;
		virtual void makeSound(void) const;/* virtual */
};

#endif /* ANIMAL_HPP */
