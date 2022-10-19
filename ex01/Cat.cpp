#include "Cat.hpp"

Cat::Cat()
	: _brainPTR(new Brain) {
	std::cout << "\nCat: Default Constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& src)
	: _brainPTR(new Brain) {/* deep copy */
	std::cout << "\nCat: Copy constructor called" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src) {
	std::cout << "\nCat: Copy assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
		*(_brainPTR) = *(src._brainPTR);/* deep copy */
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "\nCat: Destructor called" << std::endl;
	delete _brainPTR;
}

//------------------------------------------------------------------------//

void Cat::makeSound(void) const {
	std::cout << "YAONG~" << std::endl;
}

Brain *Cat::getBrain(void) const {
	return _brainPTR;
}
