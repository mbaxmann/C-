#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap Bernard("Bernard");

    Bernard.attack("Poney");
    Bernard.takeDamage(1000);
    Bernard.attack("Poney");
    Bernard.beRepaired(5);
    Bernard.attack("Poney");

    ScavTrap Serena("Serena");

    Serena.guardGate();
    Bernard.attack("Serena");
    Serena.takeDamage(0);
    Serena.beRepaired(100);
    Serena.attack("Bernard");
    Bernard.takeDamage(20);

    FragTrap Bob("Bob");

    Bob.highFivesGuys();
    Bob.attack("someone");

    DiamondTrap Billy("Billy");

    Billy.guardGate();
    Billy.whoAmI();
    Billy.highFivesGuys();
    Billy.attack("everybody");
    return (0);
}
