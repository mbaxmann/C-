#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("PresidentialPardonForm", 25, 5)
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) :
Form(src)
{
    this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    if (this == &src)
	return (*this);
    Form::operator=(src);
    this->_target = src._target;
    return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
    return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
	throw Form::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
	throw Form::GradeTooLowException();
    std::cout << executor.getName() << " executs " << "PresidentialPardonForm" << std::endl;
    std::cout << "Zafod Beeblebrox has forgiven " << this->_target << std::endl;
}
