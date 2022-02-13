#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
	    void    guardGate(void);
	    void    attack(std::string const &target_sc);

	    ScavTrap(std::string name);
	    ScavTrap(const ScavTrap &cp);
	    ~ScavTrap(void);
	    ScavTrap &operator=(const ScavTrap &cp);
};

#endif
