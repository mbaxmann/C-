#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
	Bureaucrat bobby("bobby", 160);
	std::cout << bobby << std::endl;
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;	
    }
    try
    {
	Bureaucrat billy("billy", 0);
	std::cout << billy << std::endl;
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }
    try
    {
	Bureaucrat jean("jean", 150);
	jean.decGrade();
	Bureaucrat brigitte("brigitte", 50);
	std::cout << jean << std::endl;
	std::cout << brigitte << std::endl;
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }
    try
    {
	Bureaucrat manu("manu", 30);
	Bureaucrat emma("emma", 1);
	std::cout << manu << std::endl;
	std::cout << emma << std::endl;
	manu.decGrade();
	emma.incGrade();
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }
    return (0);
}
