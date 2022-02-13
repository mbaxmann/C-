#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
	    Ice(void);
	    Ice(const Ice &cp);
	    virtual ~Ice(void);
	    Ice &operator=(const Ice &cp);

	    virtual AMateria *clone(void) const;
	    virtual void use (ICharacter &target);
};

#endif

