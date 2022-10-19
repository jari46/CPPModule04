#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

/* abstract class */
class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal& src);
		Animal& operator=(const Animal& src);
		virtual ~Animal();

		std::string getType(void) const;
		virtual void makeSound(void) const = 0;/* pure virtual function */
};

#endif /* ANIMAL_HPP */
