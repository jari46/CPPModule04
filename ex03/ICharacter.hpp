#ifndef I_CHARACTER_HPP
#define I_CHARACTER_HPP

#include <iostream>
#include <string>

#include "AMateria.hpp"

class ICharacter {
	public:
		virtual ~ICharacter() {};

		virtual std::string const & getName() const = 0;
		virtual AMateria *keepEquipment(int idx) const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif // I_CHARACTER_HPP
