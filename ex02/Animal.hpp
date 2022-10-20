#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

/* abstract class */
class Animal {
	protected:
		std::string _type;

	public:
		Animal();/* can't use */
		Animal(const Animal& src);/* can't use */
		Animal& operator=(const Animal& src);
		virtual ~Animal();

		std::string getType(void) const;

		//since all animal makes sound, and all animal sounds different.
		virtual void makeSound(void) const = 0;/* pure virtual function */
};

#endif /* ANIMAL_HPP */
