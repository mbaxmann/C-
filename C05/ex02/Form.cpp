#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : 
_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1 || gradeToExecute <1)
	throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
	throw Form::GradeTooLowException();
    this->_isSigned = false;
}

Form::Form(const Form &src) :
_name(src._name), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
}

Form::~Form(void)
{
}

Form &Form::operator=(const Form &src)
{
    if (this == &src)
	return (*this);
    this->_isSigned = src._isSigned;
    return (*this);
}

std::ostream &operator<<(std::ostream &o, const Form &src)
{
    o << "Form " << src.getName() << ":" << std::endl;
    o << "-Grade to sign: " << src.getGradeToSign() << std::endl;
    o << "-Grade to execute: " << src.getGradeToExecute() << std::endl;
    o << "Is signed: " << src.getIsSigned() << std::endl;
    return (o);
}

std::string Form::getName(void) const
{
    return (this->_name);
}

int	    Form::getGradeToSign(void) const
{
    return (this->_gradeToSign);
}

int	    Form::getGradeToExecute(void) const
{
    return (this->_gradeToExecute);
}

bool	    Form::getIsSigned(void) const
{
    return (this->_isSigned);
}

void	    Form::beSigned(Bureaucrat &src)
{
    if (src.getGrade() <= this->_gradeToSign)
    {
	std::cout << src.getName() << " signs " << this->_name << std::endl;
	this->_isSigned = true;
    }
    else
    {
	std::cout << src.getName() << " cannot sign because ";
	throw Form::GradeTooLowException();
    }
}

const char *Form::GradeTooHighException::what(void) const throw()
{
    return ("grade is too high");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
    return ("grade is too low");
}

const char *Form::FilestreamException::what(void) const throw()
{
    return ("Error could not open file");
}

const char *Form::NotSignedException::what(void) const throw()
{
    return ("Form is not signed");
}
