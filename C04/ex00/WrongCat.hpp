#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
	    void makeSound(void) const;

	    WrongCat(void);
	    WrongCat(WrongCat const &src);
	    ~WrongCat(void);
	    WrongCat &operator=(WrongCat const &src);
};

#endif
