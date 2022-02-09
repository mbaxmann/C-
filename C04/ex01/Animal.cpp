#include "Animal.hpp"

Animal::Animal(void)
{
    this->_type = "Basic Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    *this = src;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void	    Animal::makeSound(void) const
{
    std::cout << "Animal of type: " << this->_type << " is doing basic sound";
    std::cout << std::endl;
}

Animal &Animal::operator=(Animal const &src)
{
    if (this != &src)
	this->_type = src._type;
    return (*this);
}
