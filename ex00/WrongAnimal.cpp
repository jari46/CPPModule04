#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
		std::cout << "WrongAnimal: Default Constructor called" << std::endl;
	}

WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	//std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	//std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
		std::cout << "WrongAnimal: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

std::string WrongAnimal::getType(void) const {
	return _type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "(lamina)" << std::endl;
}
