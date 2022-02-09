#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
    public:
	    AMateria(std::string const &type);
	    AMateria(void);
	    virtual ~AMateria(void);

	    std::string const &getType(void) const;

	    virtual AMateria *clone(void) const = 0;
	    virtual void use(ICharacter &target);
    protected:
	    std::string _type;
};

#endif
