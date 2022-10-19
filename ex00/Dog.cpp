#include "Dog.hpp"

Dog::Dog() {
	std::cout << "\nDog: Default Constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& src) {
	std::cout << "\nDog: Copy constructor called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog& src) {
	std::cout << "\nDog: Copy assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

Dog::~Dog() {
		std::cout << "\nDog: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

void Dog::makeSound(void) const {
	std::cout << "WALWAL!" << std::endl;
}
