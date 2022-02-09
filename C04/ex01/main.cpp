#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal  *zoo[10];
    int	    i;

    for (i = 0; i < 5; i++)
	zoo[i] = new Cat;
    for (i = 5; i < 10; i++)
	zoo[i] = new Dog;
    for (i = 0; i < 10; i++)
	delete zoo[i];

    Dog	bob;
    Dog robert(bob);
    Dog bark;

    bark = bob;
    std::cout << "Bob brain addr: " << bob.getBrain() << std::endl;
    std::cout << "Robert brain addr: " << robert.getBrain() << std::endl;
    std::cout << "Bark brain addr: " << bark.getBrain() << std::endl;

    return (0);
}
