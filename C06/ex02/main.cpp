#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base	*generate(void)
{
    int	i;

    srand((unsigned)time(0));
    i = rand() % 3;
    switch (i)
    {
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	default:
		return (NULL);
    }
    return (NULL);
}

void	identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
	std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
	std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
	std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
    try
    {
	A a = dynamic_cast<A &>(p);
	std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
    }
    try
    {
	B b = dynamic_cast<B &>(p);
	std::cout << "B" << std::endl;
    }
    catch (std::exception &e)
    {
    }
    try
    {
	C c = dynamic_cast<C &>(p);
	std::cout << "C" << std::endl;
    }
    catch (std::exception &e)
    {
    }
}

int main(void)
{
    Base    *test;

    test = generate();
    std::cout << "Test with pointer:" << std::endl;
    identify(test);
    std::cout << "Test with reference:" << std::endl;
    identify(*test);
    delete test;
    return (0);
}
