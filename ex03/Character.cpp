#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor." << std::endl;
}

Character::Character(const std::string &name)
	: _name(name) {
	std::cout << "Character constructor." << std::endl;
}

Character::Character(const Character &src) {
	// std::cout << "Character copy constructor." << std::endl;
	*this = src;
}

Character &Character::operator=(const Character &src) {
	// std::cout << "Character copy assignment operator." << std::endl;
	if (this != &src) {
		for (int i = 0; i < 4; i++)
			delete _equipment[i];
		for(int i = 0; i < 4; i++)
			_equipment[i] = src._equipment[i]->clone();
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor." << std::endl;
	for(int i = 0; i < 4; i++) {
		if (_equipment[i] != NULL)
			delete _equipment[i];
	}
}

const std::string &Character::getName() const {
	return _name;
}

AMateria *Character::keepEquipment(int idx) const {
	if (idx < 4)
		return _equipment[idx];
	else
		return NULL;
}

void Character::equip(AMateria *m) {
	for(int i = 0; i < 4; i++) {//find the first empty slot
		if (!_equipment[i]) {
			_equipment[i] = m;
			return ;
		}
	}
	//In case they try to add a Materia to a full inventory,
	//don't do anything!
}

void Character::unequip(int idx) {
	if (idx < 4 && _equipment[idx] != NULL)
		_equipment[idx] = NULL;//must not delete the meteria!
	//else if unexisting Materia, don’t do anything!
}

void Character::use(int idx, ICharacter &target) {
	if (idx < 4 && _equipment[idx] != NULL)
		_equipment[idx]->use(target);
	//else if unexisting Materia, don’t do anything!
}
