#include <iostream>
#include <list>
#include "easyfind.hpp"

int main(void)
{
    std::list<int> my_list(2, 100);

    my_list.push_front(150);
    my_list.push_front(-45);
    std::list<int>::iterator itr;
    try
    {
	itr = easyfind(my_list, -45);
	std::cout << "Result found: " << *itr << std::endl;
    }
    catch (const std::exception &e)
    {
	std::cerr << e.what() << std::endl;
    }
    try
    {
	itr = easyfind(my_list, 30);
	std::cout << "Result found: " << *itr << std::endl;
    }
    catch (const std::exception &e)
    {
	std::cerr << e.what() << std::endl;
    }
    return (0);
}
