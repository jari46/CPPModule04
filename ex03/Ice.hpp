#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& src);
		Ice& operator=(const Ice& src);

		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);
};

#endif // ICE_HPP
