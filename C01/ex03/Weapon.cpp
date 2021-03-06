#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
    this->_type = weapon_type;
}

const std::string &Weapon::getType(void)
{
    return (this->_type);
}

void Weapon::setType(std::string new_type)
{
    this->_type = new_type;
}
