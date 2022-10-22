#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor." << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor." << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src)  {
	 std::cout << "Ice copy constructor." << std::endl;
}

Ice &Ice::operator=(const Ice &src) {
	//std::cout << "Ice copy assignment operator." << std::endl;
	if (this != &src) {
		//do nothing
	};
	return *this;
}

AMateria *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
