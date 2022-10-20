#include <cctype>
#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: Default Constructor called" << std::endl;
	setIdeas("no", 1);
}

Brain::Brain(const Brain& src) {
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = src;
}

Brain& Brain::operator=(const Brain& src) {
	std::cout << "Brain: Copy assignment operator called" << std::endl;
	if (this != &src) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = src._ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
		std::cout << "Brain: Destructor called" << std::endl;
}

//----------------------------------------------------------------------//

void Brain::setIdeas(std::string type, int num) {
	for (int i = 0; i < num; i++) {
		_ideas[i] = type + "Idea";
	}
}

void Brain::displayIdeas() const {
	for (int i = 0; i < 100; i++) {
		std::cout << _ideas[i] << " ";
	}
	std::cout << std::endl;
}
