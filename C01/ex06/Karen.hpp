#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>

class	Karen
{
    public:
	    void complain(std::string level);

	    Karen(void);
	    ~Karen(void);
    private:
	    std::string	    _intab[4];
	    typedef void    (Karen::*fct[4])(void);

	    void debug(void);
	    void info(void);
	    void warning(void);
	    void error(void);
};

# endif
