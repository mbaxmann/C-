#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
	    void    highFivesGuys(void);
	    void    attack(std::string const &target_sc);

	    FragTrap(std::string name);
	    FragTrap(const FragTrap &cp);
	    FragTrap(void);
	    ~FragTrap(void);
	    FragTrap &operator=(const FragTrap &cp);
};

#endif
