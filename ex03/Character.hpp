#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria*	_equipment[4];

	public:
		Character();
		Character(const std::string& name);
		Character(const Character& src);
		Character& operator=(const Character& src);
		virtual ~Character();

		virtual const std::string &getName() const;
		virtual AMateria *keepEquipment(int idx) const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);

};


#endif // CHARACTER_HPP
