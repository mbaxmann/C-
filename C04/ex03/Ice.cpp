#include "Ice.hpp"

Ice::Ice(void)
{
    this->_type = "ice";
}

Ice::~Ice(void)
{
}

AMateria    *Ice::clone(void) const
{
    AMateria	*cp = new Ice;
    return (cp);
}

void	    Ice::use(ICharacter &target)
{
    std::cout << "*shouts an ice bolt at " << target.getName() << " *" << std::endl;
}
