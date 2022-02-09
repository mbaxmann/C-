#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    this->_type = "Basic WrongAnimal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    *this = src;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}

void	    WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal of type: " << this->_type << " is doing basic sound";
    std::cout << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    if (this != &src)
	this->_type = src._type;
    return (*this);
}

