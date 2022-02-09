#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal  *animal = new Dog;

    animal->makeSound();
    delete animal;
    return (0);
}
