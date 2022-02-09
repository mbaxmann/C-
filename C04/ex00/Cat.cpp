#include "Cat.hpp"

Cat::Cat(void)
{
    this->_type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
    *this = src;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
    std::cout << "Animal of type: " << this->_type << " say miaou !";
    std::cout << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    if (this != &src)
	this->_type = src._type;
    return (*this);
}
