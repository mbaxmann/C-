#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{
    public:
	    std::string	    getType(void) const;
	    virtual void    makeSound(void) const;

	    Animal(void);
	    Animal(Animal const &src);
	    virtual ~Animal(void);
	    Animal &operator=(Animal const &src);
    protected:
	    std::string _type;
};

#endif
