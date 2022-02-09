#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "Dog";
    this->_Brain = new Brain;
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
    this->_Brain = new Brain;
    *(this->_Brain) = *(src._Brain);
    this->_type = src._type;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_Brain;
}

void	Dog::makeSound(void) const
{
    std::cout << "Animal of type: " << this->_type << " say waouf !";
    std::cout << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    if (this != &src)
    {
	this->_type = src._type;
	delete this->_Brain;
	this->_Brain = new Brain;
	*(this->_Brain) = *(src._Brain);
    }
    return (*this);
}

Brain *Dog::getBrain(void) const
{
    return (this->_Brain);
}
