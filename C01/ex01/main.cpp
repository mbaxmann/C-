#include "Zombie.hpp"

int main(void)
{
    Zombie  *zombie_horde;

    zombie_horde = zombieHorde(5, "Timmy");
    for (int i = 0; i < 5; i++)
	zombie_horde[i].announce();
    delete [] zombie_horde;
    return (0);
}
