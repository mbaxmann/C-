#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap constructor called." << std::endl;
    ClapTrap::_Name = name + "_clap_name";
    this->_Name = name;
    this->_Hitpoints = FragTrap::_Frag_Hitpoints;
    this->_Energy_points = ScavTrap::_Scav_Energy_Points;
    this->_Attack_damage = FragTrap::_Frag_Attack_Damage;
}

DiamondTrap::DiamondTrap(void)
{
    std::cout << "DiamondTrap constructor called." << std::endl;
    ClapTrap::_Name = "DiamondTrap_clap_name";
    this->_Name = "DiamondTrap";
    this->_Hitpoints = FragTrap::_Frag_Hitpoints;
    this->_Energy_points = ScavTrap::_Scav_Energy_Points;
    this->_Attack_damage = FragTrap::_Frag_Attack_Damage;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called." << std::endl;
}

void	DiamondTrap::attack(std::string const &target_dc)
{
    if (this->_Hitpoints > 0)
    {
	std::cout << "DiamondTrap " << this->_Name << " attack " << target_dc;
	std::cout << ", causing " << this->_Attack_damage << " damage !" << std::endl;
    }
    else
	std::cout << "DiamondTrap " << this->_Name << " is dead and cannot attack." <<std::endl;
}

void	DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap: My name is " << this->_Name;
    std::cout << " and my clapTrap name is " << ClapTrap::_Name << std::endl;
}
