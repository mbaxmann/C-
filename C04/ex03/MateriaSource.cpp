#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    this->_memory[0] = NULL;
    this->_memory[1] = NULL;
    this->_memory[2] = NULL;
    this->_memory[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
    {
	if (src._memory[i] != NULL)
	    this->_memory[i] = src._memory[i]->clone();
	else
	    this->_memory[i] = NULL;
    }
}

MateriaSource::~MateriaSource(void)
{
    for (int i = 0; i < 4; i++)
	if (this->_memory[i] != NULL)
	    delete this->_memory[i];
}

void	MateriaSource::learnMateria(AMateria *src)
{
    int i = 0;
    while (this->_memory[i] != NULL && i < 4)
	i++;
    if (i >= 4)
	return ;
    this->_memory[i] = src;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
	if (!this->_memory[i]->getType().compare(type))
	    return (this->_memory[i]->clone());
    }
    return (NULL);
}
