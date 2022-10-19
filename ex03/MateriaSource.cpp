#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor." << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	*this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src) {
	if (this != &src) {
		for(int i = 0; i < 4; i++)
			delete _materias[i];
		for(int i = 0; i < 4; i++)
			_materias[i] = src._materias[i];
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor." << std::endl;
	for(int i = 0; i < 4; i++)
		delete _materias[i];
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (materia) {
		for(int i = 0; i < 4; i++)
			if (_materias[i] == NULL) {
				_materias[i] = materia->clone();
				return;
			}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for(int i = 0; i < 4; i++) {
		if (_materias[i] !=  NULL && _materias[i]->getType() == type)
				return _materias[i]->clone();
	}
	return NULL;
}
