#include "Cure.hpp"

Cure::Cure(void)
{
    this->_type = "cure";
}

Cure::Cure(const Cure &cp)
{
	*this = cp;
}

Cure	&Cure::operator=(const Cure &cp)
{
	if (this != &cp)
		*this = cp;
	return (*this);
}

Cure::~Cure(void)
{
}

AMateria    *Cure::clone(void) const
{
    AMateria	*cp = new Cure;
    return (cp);
}

void	    Cure::use(ICharacter &target)
{
    std::cout << "*heals " << target.getName() << "'s wounds *" << std::endl;
}
