#include "Cat.hpp"

Cat::Cat(void)
{
    this->_type = "Cat";
    this->_Brain = new Brain;
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
    this->_type = src._type;
    this->_Brain = new Brain;
    *(this->_Brain) = *(src._Brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_Brain;
}

void	Cat::makeSound(void) const
{
    std::cout << "Animal of type: " << this->_type << " say miaou !";
    std::cout << std::endl;
}

Cat &Cat::operator=(Cat const &src)
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

Brain *Cat::getBrain(void) const
{
    return (this->_Brain);
}
