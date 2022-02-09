#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    *this = src;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
    std::cout << "Animal of type: " << this->_type << " say waouf !";
    std::cout << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    if (this != &src)
	this->_type = src._type;
    return (*this);
}

