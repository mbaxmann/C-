#include "Fixed.hpp"

Fixed::Fixed(void) : _f(0)
{
}

Fixed::Fixed(const Fixed &cp)
{
    *this = cp;
}

Fixed::Fixed(const int f) : _f(0)
{
    this->_f += roundf(f * (1 << frac));
}

Fixed::Fixed(const float f) : _f(0)
{
    this->_f += roundf(f * (1 << frac));
}

Fixed::~Fixed(void)
{
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fix)
{
    os << fix.toFloat();
    return (os);
}

Fixed		&Fixed::operator=(const Fixed &cp)
{
    if (this != &cp)
	this->_f = cp.getRawBits();
    return (*this);
}

Fixed		&Fixed::operator++(void)
{
    this->_f++;
    return (*this);
}

Fixed		Fixed::operator++(int)
{
    Fixed   tmp;

    tmp._f = this->_f;
    this->_f++;
    return (tmp);
}

Fixed		&Fixed::operator--(void)
{
    this->_f--;
    return (*this);
}

Fixed		Fixed::operator--(int)
{
    Fixed   tmp;

    tmp._f = this->_f;
    this->_f--;
    return (tmp);
}

Fixed		Fixed::operator+(const Fixed &cp) const
{
    Fixed ret;

    ret._f = this->_f + cp._f;
    return (ret);
}

Fixed		Fixed::operator-(const Fixed &cp) const
{
    Fixed ret;

    ret._f = this->_f - cp._f;
    return (ret);
}

Fixed		Fixed::operator*(const Fixed &cp) const
{
    Fixed ret;

    ret._f =  (this->_f * cp._f) / (1 << frac);
    return (ret);
}

Fixed		Fixed::operator/(const Fixed &cp) const
{
    Fixed ret;

    ret._f = (this->_f / cp._f) * (1 << frac);
    return (ret);
}

bool		Fixed::operator<(const Fixed &cp) const
{
    if (this->_f < cp._f)
	return (true);
    return (false);
}

bool		Fixed::operator<=(const Fixed &cp) const
{
    if (this->_f <= cp._f)
	return (true);
    return (false);
}

bool		Fixed::operator>(const Fixed &cp) const
{
    if (this->_f > cp._f)
	return (true);
    return (false);
}

bool		Fixed::operator>=(const Fixed &cp) const
{
    if (this->_f >= cp._f)
	return (true);
    return (false);
}

bool		Fixed::operator==(const Fixed &cp) const
{
    if (this->_f == cp._f)
	return (true);
    return (false);
}

bool		Fixed::operator!=(const Fixed &cp) const
{
    if (this->_f != cp._f)
	return (true);
    return (false);
}

int	Fixed::toInt(void) const
{
    return ((int)this->_f / (int)(1 << frac));
}

float	Fixed::toFloat(void) const
{
    return ((float)this->_f / (float)(1 << frac));
}

int	Fixed::getRawBits(void) const
{
    return (this->_f);
}

void	Fixed::setRawBits(int const raw)
{
    this->_f = raw;
}
