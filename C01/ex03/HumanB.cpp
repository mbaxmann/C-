#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
    std::cout << this->_name << " is ready but not armed !" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << this->_name << " is dead !" << std::endl;
}

void	HumanB::attack(void)
{
    if (this->_weapon)
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
    else
	std::cout << this->_name << ": I need a weapon !" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon_type)
{
    this->_weapon = &weapon_type;
    std::cout << this->_name << ": Ok now I have a real weapon !" << std::endl;
}
