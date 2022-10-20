#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor." << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type) {
	std::cout << "AMateria constructor." << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor." << std::endl;
}

AMateria::AMateria(const AMateria& src) : _type(src._type) {
	// std::cout << "AMateria copy constructor." << std::endl;
}

AMateria& AMateria::operator=(const AMateria &src) {
	// std::cout << "AMateria copy assignment operator." << std::endl;
	if (this != &src) {
		//do nothing
	}
	return *this;
}

std::string const &AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	std::cout << target.getName() << std::endl;
}
