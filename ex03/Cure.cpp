#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Cure default constructor." << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor." << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src) {
	//std::cout << "Cure copy constructor constructor." << std::endl;
}

Cure& Cure::operator=(const Cure &src) {
	//std::cout << "Cure copy assignment operator." << std::endl;
	if (this != &src) {
		//do nothing
	};
	return *this;
}
AMateria *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}
