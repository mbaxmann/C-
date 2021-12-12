#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
    public:
	    int	    getRawBits(void) const;
	    void    setRawBits(int const raw);
	    int	    toInt(void) const;
	    float   toFloat(void) const;

	    Fixed(void);
	    Fixed(const Fixed &cp);
	    Fixed(const int f);
	    Fixed(const float f);
	    ~Fixed(void);
	    Fixed &operator=(const Fixed &cp) const;
	    bool    operator<(const Fixed &cp) const;
	    bool    operator<=(const Fixed &cp) const;
	    bool    operator>(const Fixed &cp) const;
	    bool    operator>=(const Fixed &cp) const;
	    bool    operator==(const Fixed &cp) const;
	    bool    operator!=(const Fixed &cp) const;
    private:
	    int	_f;
	    static const int	frac = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fix);

#endif
