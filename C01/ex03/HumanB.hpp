#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB
{
    public:
	    void    attack(void);
	    void    setWeapon(Weapon &weapon_type);
	    HumanB(std::string name);
	    ~HumanB(void);
    private:
	    std::string	_name;
	    Weapon	*_weapon;
};

# endif
