#include "Character.hpp"

Character::Character(void)
{
    this->_name = "Bobby";
    this->_inventory[0] = NULL;
    this->_inventory[1] = NULL;
    this->_inventory[2] = NULL;
    this->_inventory[3] = NULL;
}

Character::Character(std::string name)
{
    this->_name = name;
    this->_inventory[0] = NULL;
    this->_inventory[1] = NULL;
    this->_inventory[2] = NULL;
    this->_inventory[3] = NULL;
}

Character::Character(const Character &src)
{
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
    {
	if (src._inventory[i] != NULL)
	    this->_inventory[i] = src._inventory[i]->clone();
	else
	    this->_inventory[i] = NULL;
    }
}

Character::~Character(void)
{
    for (int i = 0; i < 4; i++)
	if (this->_inventory[i] != NULL)
	    delete this->_inventory[i];
}

Character &Character::operator=(const Character &src)
{
    if (this == &src)
	return (*this);
    this->_name = src._name;
    for (int i = 0; i < 4; i++)
    {
	if (src._inventory[i] != NULL)
	    this->_inventory[i] = src._inventory[i]->clone();
	else
	    this->_inventory[i] = NULL;
    }
    return (*this);
}

std::string const &Character::getName(void) const
{
    return (this->_name);
}

void	Character::equip(AMateria *m)
{
    int i = 0;

    while (this->_inventory[i] != NULL && i < 4)
	i++;
    if (i >= 4)
	return ;
    this->_inventory[i] = m;
}

void	Character::unequip(int idx)
{
    if (idx >= 4)
	return ;
    if (this->_inventory[idx] != NULL)
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
    if (idx >= 4)
	return ;
    if (this->_inventory[idx] != NULL)
	this->_inventory[idx]->use(target);
}
