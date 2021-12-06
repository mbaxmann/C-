#include "Zombie.hpp"

Zombie::Zombie(std::string new_name) : _name(new_name)
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
}
