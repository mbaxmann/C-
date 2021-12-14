#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
	    void    highFivesGuys(void);
	    void    attack(std::string const &target_sc);

	    FragTrap(std::string name);
	    FragTrap(void);
	    ~FragTrap(void);
    protected:
	    static const int _Frag_Attack_Damage = 30;
	    static const int _Frag_Hitpoints = 100;
};

#endif
