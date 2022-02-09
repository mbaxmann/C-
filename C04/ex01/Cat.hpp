#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
	    virtual void makeSound(void) const;
	    Brain	*getBrain(void) const;

	    Cat(void);
	    Cat(Cat const &src);
	    virtual ~Cat(void);
	    Cat &operator=(Cat const &src);
    private:
	    Brain *_Brain;
};

#endif
