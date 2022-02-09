#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (this->_grade < 1)
	throw Bureaucrat::GradeTooHighException();
    else if (this->_grade > 150)
	throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    if (this == &src)
	return (*this);
    this->_grade = src._grade;
    return (*this);
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (o);
}

std::string	Bureaucrat::getName(void) const
{
    return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void	Bureaucrat::incGrade(void)
{
    this->_grade--;
    std::cout << *this << std::endl;
    if (this->_grade < 1)
	throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decGrade(void)
{
    this->_grade++;
    std::cout << *this << std::endl;
    if (this->_grade > 150)
	throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Bureaucrat's grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Bureaucrat's grade is too low");
}
