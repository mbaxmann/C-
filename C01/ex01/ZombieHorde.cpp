#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie  *zombie_array;
    char    c;

    if (N < 1)
	return (NULL);
    zombie_array = new Zombie[N];
    c = '0';
    for (int i = 0; i < N; i++, c++)
	zombie_array[i].change_name(name + "_" + c);
    return (zombie_array);
}
