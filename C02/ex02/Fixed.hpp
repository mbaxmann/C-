#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
    public:
	    int			getRawBits(void) const;
	    void	        setRawBits(int const raw);
	    int			toInt(void) const;
	    float	        toFloat(void) const;
	    static Fixed	&min(Fixed &p1, Fixed &p2){
		if (p1 <= p2)
		    return (p1);
		return (p2);
	    }
	    static const Fixed	&min(const Fixed &p1, const Fixed &p2){
		if (p1 <= p2)
		    return (p1);
		return (p2);
	    }
	    static Fixed	&max(Fixed &p1, Fixed &p2){
		if (p1 >= p2)
		    return (p1);
		return (p2);
	    }
	    static const Fixed  &max(const Fixed &p1, const Fixed &p2){
		if (p1 >= p2)
		    return (p1);
		return (p2);
	    }

	    Fixed(void);
	    Fixed(const Fixed &cp);
	    Fixed(const int f);
	    Fixed(const float f);
	    ~Fixed(void);
	    Fixed &operator=(const Fixed &cp);
	    bool    operator<(const Fixed &cp) const;
	    bool    operator<=(const Fixed &cp) const;
	    bool    operator>(const Fixed &cp) const;
	    bool    operator>=(const Fixed &cp) const;
	    bool    operator==(const Fixed &cp) const;
	    bool    operator!=(const Fixed &cp) const;
	    Fixed   operator+(const Fixed &cp) const;
	    Fixed   operator-(const Fixed &cp) const;
	    Fixed   operator*(const Fixed &cp) const;
	    Fixed   operator/(const Fixed &cp) const;
	    Fixed   &operator++(void);
	    Fixed   operator++(int);
	    Fixed   &operator--(void);
	    Fixed   operator--(int);
    private:
	    int	_f;
	    static const int	frac = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fix);

#endif
