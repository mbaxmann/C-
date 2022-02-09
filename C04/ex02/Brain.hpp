#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
	    std::string ideas[100];

	    Brain(void);
	    Brain(Brain const &src);
	    ~Brain(void);
	    Brain &operator=(Brain const &src);
};

#endif
