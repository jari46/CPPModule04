#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src);
		WrongAnimal& operator=(const WrongAnimal& src);
		~WrongAnimal();/* no virtual */

		std::string getType(void) const;
		void makeSound(void) const;/* no virtual */
};

#endif /* WRONG_ANIMAL_HPP */
