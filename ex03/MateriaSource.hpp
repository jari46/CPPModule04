#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

//learn "templates" of Materias to create them when needed.
//Then, you will be able to generate a new Materia using just a string that identifies its type

class MateriaSource : public IMateriaSource {
	private:
		AMateria* _materias[4];

	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource& src);
		MateriaSource& operator=(const MateriaSource& src);

		void learnMateria(AMateria *materia);
		AMateria *createMateria(const std::string &type);
};

#endif // MATERIA_SOURCE_HPP
