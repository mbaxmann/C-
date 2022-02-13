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
	    DiamondTrap(const DiamondTrap &cp);
	    DiamondTrap(void);
	    ~DiamondTrap(void);
	    DiamondTrap &operator=(const DiamondTrap &cp);
    private:
	    std::string _Name;
};

#endif
