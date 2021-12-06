#include "Zombie.hpp"

int main(void)
{
    Zombie  bob("bob");
    Zombie  billy("billy");
    Zombie  *jack;

    bob.announce();
    billy.announce();
    jack = newZombie("jack");
    jack->announce();
    randomChump("Harry");
    delete jack;
    return (0);
}
