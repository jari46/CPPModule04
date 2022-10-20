#include "Animal.hpp"

Animal::Animal() {
		std::cout << "Animal: Default Constructor called" << std::endl;
	}

Animal::Animal(const Animal& src) {
	//std::cout << "Animal: Copy constructor called" << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal& src) {
	//std::cout << "Animal: Copy assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

Animal::~Animal() {
		std::cout << "Animal: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

std::string Animal::getType(void) const {
	return _type;
}

void Animal::makeSound(void) const {
	std::cout << "(...)" << std::endl;
}
