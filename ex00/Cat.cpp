#include "Cat.hpp"

Cat::Cat() {
	std::cout << "\nCat: Default Constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& src) {
	std::cout << "\nCat: Copy constructor called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src) {
	std::cout << "\nCat: Copy assignment operator called" << std::endl;
	if (this != &src) {
		_type = src.getType();
	}
	return *this;
}

Cat::~Cat() {
		std::cout << "\nCat: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

void Cat::makeSound(void) const {
	std::cout << "YAONG~" << std::endl;
}
