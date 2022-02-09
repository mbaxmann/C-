#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
    this->_type = type;
}

AMateria::AMateria(void)
{
    this->_type = "No type";
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
