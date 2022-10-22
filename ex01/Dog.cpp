#include "Dog.hpp"

Dog::Dog()
	: _brainPTR(new Brain) {
	std::cout << "Dog: Default Constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& src)
	: _brainPTR(new Brain) {/* deep copy */
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog& src) {
	//std::cout << "Dog: Copy assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
		*(_brainPTR) = *(src._brainPTR);/* deep copy */
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog: Destructor called" << std::endl;
	delete _brainPTR;
}

//------------------------------------------------------------------------//

void Dog::makeSound(void) const {
	std::cout << "WALWAL!" << std::endl;
}

Brain *Dog::getBrain(void) const {
	return _brainPTR;
}
