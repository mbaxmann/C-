#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
    *this = src;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
    std::cout << "Animal of type: " << this->_type << " say miaou !";
    std::cout << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    if (this != &src)
	this->_type = src._type;
    return (*this);
}
