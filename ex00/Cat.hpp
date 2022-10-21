#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& src);
		Cat& operator=(const Cat& src);
		virtual ~Cat();/* virtual */

		virtual void makeSound(void) const;/* virtual */
};

#endif /* CAT_HPP */
