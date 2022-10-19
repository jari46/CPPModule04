#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_brainPTR;

	public:
		Cat();
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);
		~Cat();

		void makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif /* CAT_HPP */
