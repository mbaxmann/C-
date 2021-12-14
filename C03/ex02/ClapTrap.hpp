#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
    public:
	    void    attack(std::string const &target);
	    void    takeDamage(unsigned int amount);
	    void    beRepaired(unsigned int amount);

	    ClapTrap(std::string name);
	    ClapTrap(void);
	    ~ClapTrap(void);
    protected:
	    std::string _Name;
	    int		_Hitpoints;
	    int		_Energy_points;
	    int		_Attack_damage;
};

#endif
