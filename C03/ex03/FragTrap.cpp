#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called." << std::endl;
    this->_Name = name;
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
}

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap constructor called." << std::endl;
    this->_Name = "FragTrap";
    this->_Hitpoints = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &cp)
{
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = cp;
}

FragTrap	&FragTrap::operator=(const FragTrap &cp)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != & cp)
		this->_Name = cp._Name;
	return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_Name << ": Hey! Give an High five !" << std::endl;
}

void	FragTrap::attack(std::string const &target_fc)
{
    if (this->_Hitpoints > 0)
    {
	std::cout << "FragTrap " << this->_Name << " attack " << target_fc;
	std::cout << ", causing " << this->_Attack_damage << " damge !" << std::endl;
    }
    else
	std::cout << "FragTrap " << this->_Name << " is dead and cannot attack." <<std::endl;
}
