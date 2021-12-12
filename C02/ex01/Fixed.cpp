#include "Fixed.hpp"

Fixed::Fixed(void) : _f(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed::Fixed(const int f) : _f(0)
{
    std::cout << "Int constructor called" << std::endl;
    this->_f += roundf(f * (1 << frac));
}

Fixed::Fixed(const float f) : _f(0)
{
    std::cout << "Float constructor called" << std::endl;
    this->_f += roundf(f * (1 << frac));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Fixed &fix)
{
    os << fix.toFloat();
    return (os);
}

Fixed		&Fixed::operator=(const Fixed &cp)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &cp)
	this->_f = cp.getRawBits();
    return (*this);
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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_f);
}

void	Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_f = raw;
}

bool	Fixed::operator<(const Fixed &cp) const
{
    if (this->_f < cp._f)
	return (true);
    return (false);
}

bool	Fixed::operator<=(const Fixed &cp) const
{
    if (this->_f <= cp._f)
	return (true);
    return (false);
}

bool	Fixed::operator>(const Fixed &cp) const
{
    if (this->_f > cp._f)
	return (true);
    return (false);
}

bool	Fixed::operator>=(const Fixed &cp) const
{
    if (this->_f >= cp._f)
	return (true);
    return (false);
}

bool	Fixed::operator==(const Fixed &cp) const
{
    if (this->_f == cp._f)
	return (true);
    return (false);
}

bool	Fixed::operator!=(const Fixed &cp) const
{
    if (this->_f != cp._f)
	return (true);
    return (false);
}
