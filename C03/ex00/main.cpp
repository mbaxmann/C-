#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Bernard("Bernard");

    Bernard.attack("Poney");
    Bernard.takeDamage(1000);
    Bernard.attack("Poney");
    Bernard.beRepaired(5);
    Bernard.attack("Poney");
    return (0);
}
