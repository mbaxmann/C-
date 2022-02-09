#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	Bureaucrat jacob("jacob", 1);
	Form	*form1 = new ShrubberyCreationForm("house");
	jacob.signForm(*form1);
	jacob.executeForm(*form1);
	delete form1;
	form1 = new RobotomyRequestForm("robbert");
	jacob.signForm(*form1);
	jacob.executeForm(*form1);
	delete form1;
	form1 = new PresidentialPardonForm("Jean");
	jacob.signForm(*form1);
	jacob.executeForm(*form1);
	delete form1;
    }
    catch (std::exception &e)
    {
	std::cout << e.what() << std::endl;
    }
    return (0);
}
