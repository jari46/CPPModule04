#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include <iostream>
#include <string>

class ICharacter;

class AMateria {
	protected:
		std::string _type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& src);
		virtual ~AMateria();
		AMateria &operator=(const AMateria& src);

		std::string const & getType() const; // Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};


#endif // A_MATERIA_HPP
