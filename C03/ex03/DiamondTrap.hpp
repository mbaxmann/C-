#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
	    void    attack(std::string const &target_sc);
	    void    whoAmI(void);

	    DiamondTrap(std::string name);
	    DiamondTrap(void);
	    ~DiamondTrap(void);
    private:
	    std::string _Name;
};

#endif
