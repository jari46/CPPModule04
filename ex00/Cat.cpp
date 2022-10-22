#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat: Default Constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& src) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src) {
	//std::cout << "Cat: Copy assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

Cat::~Cat() {
		std::cout << "Cat: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

void Cat::makeSound(void) const {
	std::cout << "YAONG~" << std::endl;
}
