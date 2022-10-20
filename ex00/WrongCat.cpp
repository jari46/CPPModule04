#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat: Default Constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& src) {
	//std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& src) {
	//std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	if (this != &src) {
		_type = src._type;
	}
	return *this;
}

WrongCat::~WrongCat() {
		std::cout << "WrongCat: Destructor called" << std::endl;
}

//------------------------------------------------------------------------//

void WrongCat::makeSound(void) const {
	std::cout << "YAONG~" << std::endl;
}
