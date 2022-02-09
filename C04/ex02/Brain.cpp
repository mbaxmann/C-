#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(Brain const &src)
{
    *this = src;
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator=(Brain const &src)
{
    if (this != &src)
	for (int i = 0; i < 100; i++)
	    this->ideas[i] = src.ideas[i];
    return (*this);
}
