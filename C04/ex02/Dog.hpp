#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
	    virtual void makeSound(void) const;
	    Brain	*getBrain(void) const;

	    Dog(void);
	    Dog(Dog const &src);
	    virtual ~Dog(void);
	    Dog &operator=(Dog const &src);
    private:
	    Brain *_Brain;
};

#endif
