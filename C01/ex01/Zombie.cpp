#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Bobby")
{
    std::cout << "A new zombie is born!" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " just died!" << std::endl;
}

void	Zombie::announce(void)
{
    std::cout << this->_name << ": Brainnnnzzzzzzz" << std::endl;
    return ;
}

void	Zombie::change_name(std::string name)
{
    this->_name = name;
    return ;
}
