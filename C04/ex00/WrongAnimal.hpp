#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
    public:
	    std::string	    getType(void) const;
	    void    makeSound(void) const;

	    WrongAnimal(void);
	    WrongAnimal(WrongAnimal const &src);
	    ~WrongAnimal(void);
	    WrongAnimal &operator=(WrongAnimal const &src);
    protected:
	    std::string _type;
};

#endif

