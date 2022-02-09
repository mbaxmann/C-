#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
	    Intern(void);
	    ~Intern(void);
	    Intern(const Intern &src);

	    Intern &operator=(const Intern &src);
	    Form *makeForm(std::string formName, std::string target);
	    class UnknownNameException : public std::exception
	    {
		public:
			virtual const char *what(void) const throw();
	    };
    private:
	    std::string _formType[3];
	    typedef Form *(Intern::*method)(std::string);
	    method _methodArray[3];

	    Form *makeShrubberyCreationForm(std::string target);
	    Form *makeRobotomyRequestForm(std::string target);
	    Form *makePresidentialPardonForm(std::string target);
};

#endif
