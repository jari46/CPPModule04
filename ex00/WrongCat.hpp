#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat& src);
		WrongCat& operator=(const WrongCat& src);
		~WrongCat();

		void makeSound(void) const;
};

#endif /* WRONG_CAT_HPP */
