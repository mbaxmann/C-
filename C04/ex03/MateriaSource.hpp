#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
	    MateriaSource(void);
	    MateriaSource(const MateriaSource &src);
	    virtual ~MateriaSource(void);

	    MateriaSource &operator=(const MateriaSource &src);
	    virtual void learnMateria(AMateria *src);
	    virtual AMateria* createMateria(std::string const & type);
    private:
	    AMateria *_memory[4];
};

#endif
