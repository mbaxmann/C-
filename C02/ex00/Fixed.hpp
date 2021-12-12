#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed
{
    public:
	    int	    getRawBits(void) const;
	    void    setRawBits(int const raw);	

	    Fixed(void);
	    Fixed(const Fixed &cp);
	    ~Fixed(void);
	    Fixed &operator=(const Fixed &cp);
    private:
	    int	_f;
	    static const int	frac = 8;
};

#endif
