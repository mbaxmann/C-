#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called." << std::endl;
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap constructor called." << std::endl;
    this->_Name = "ScavTrap";
    this->_Hitpoints = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &cp)
{
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = cp;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &cp)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this != & cp)
		this->_Name = cp._Name;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called." << std::endl;
}

void	ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_Name << " has enterred in Gate keeper mode.";
    std::cout << std::endl;
}

void	ScavTrap::attack(std::string const &target_sc)
{
    if (this->_Hitpoints > 0)
    {
	std::cout << "ScavTrap " << this->_Name << " attack " << target_sc;
	std::cout << ", causing " << this->_Attack_damage << " damge !" << std::endl;
    }
    else
	std::cout << "ScavTrap " << this->_Name << " is dead and cannot attack." <<std::endl;
}
