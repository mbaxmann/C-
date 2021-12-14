#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called." << std::endl;
    this->_Name = name;
    this->_Hitpoints = 10;
    this->_Energy_points = 10;
    this->_Attack_damage = 0;
}

ClapTrap::ClapTrap(void)
{
    std::cout << "ClapTrap constructor called." << std::endl;
    this->_Name = "ClapTrap";
    this->_Hitpoints = 10;
    this->_Energy_points = 10;
    this->_Attack_damage = 0;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called." << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
    if (this->_Hitpoints > 0)
    {
	std::cout << "ClapTrap " << this->_Name << " attack " << target;
	std::cout << ", causing " << this->_Attack_damage << " damge !" << std::endl;
    }
    else
	std::cout << "ClapTrap " << this->_Name << " is dead and cannot attack." <<std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_Name << " took ";
    std::cout << amount << " damage !" << std::endl;
    this->_Hitpoints -= amount;
    if (this->_Hitpoints < 0)
	this->_Hitpoints = 0;
    if (!this->_Hitpoints)
	std::cout << "ClapTrap " << this->_Name << " is dead !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    this->_Hitpoints += amount;
    std::cout << "ClapTrap " << this->_Name << " healed " << amount;
    std::cout << " pv and now has " << this->_Hitpoints << " Hitpoints" << std::endl;
}
