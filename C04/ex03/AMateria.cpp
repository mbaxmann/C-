#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

AMateria::AMateria(void)
{
    this->_type = "No type";
}

AMateria::AMateria(const AMateria &cp)
{
    *this = cp;
}

AMateria    &AMateria::operator=(const AMateria &cp)
{
    if (this != &cp)
	this->_type = cp._type;
    return (*this);
}

AMateria::~AMateria(void)
{
}

std::string const &AMateria::getType(void) const
{
    return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
    std::cout << target.getName() << " isn't using any materia" << std::endl;
}
