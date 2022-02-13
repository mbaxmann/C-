#include "Intern.hpp"

Intern::Intern(void)
{
    this->_formType[0] = "ShrubberyCreationForm";
    this->_formType[1] = "RobotomyRequestForm";
    this->_formType[2] = "PresidentialPardonForm";
    this->_methodArray[0] = &Intern::makeShrubberyCreationForm;
    this->_methodArray[1] = &Intern::makeRobotomyRequestForm;
    this->_methodArray[2] = &Intern::makePresidentialPardonForm;
}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern::~Intern(void)
{
}

Intern &Intern::operator=(const Intern &src)
{
	if (this != &src)
		*this = src;
    return (*this);
}

Form *Intern::makeShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

const char *Intern::UnknownNameException::what(void) const throw()
{
    return ("Error unknown form name.");
}

Form *Intern::makeForm(std::string formName, std::string target)
{
    int i;
    for (i = 0; i < 3; i++)
	if (this->_formType[i] == formName)
	    break;
    switch (i)
    {
	case 3:
		throw Intern::UnknownNameException();
		return (NULL);
	default:
		std::cout << "Intern creates " << formName << std::endl;
		return ((this->*_methodArray[i])(target));
    }
    return (NULL);
}
