#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon
{
    public:
	    void		setType(std::string new_type);
	    const std::string	&getType(void);
	    Weapon(std::string	weapon_type);
    private:
	    std::string _type;
};

#endif
