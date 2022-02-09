#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"

class ICharacter;

class Character : public ICharacter
{
    public:
	    Character(void);
	    Character(std::string name);
	    Character(const Character &src);
	    virtual ~Character(void);

	    Character &operator=(const Character &src);
	    virtual std::string const &getName(void) const;
	    virtual void equip(AMateria* m);
	    virtual void unequip(int idx);
	    virtual void use(int idx, ICharacter& target);
    private:
	    std::string _name;
	    AMateria *_inventory[4];
};

#endif
