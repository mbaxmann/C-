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

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &cp)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &cp)
	this->_f = cp.getRawBits();
    return (*this);
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
