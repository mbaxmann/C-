#include "Cure.hpp"

Cure::Cure(void)
{
    this->_type = "cure";
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
