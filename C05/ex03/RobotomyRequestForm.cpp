#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("RobotomyRequestForm", 72, 45)
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) :
Form(src)
{
    this->_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    if (this == &src)
	return (*this);
    Form::operator=(src);
    this->_target = src._target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
    return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    int	success;

    if (this->getIsSigned() == false)
	throw Form::NotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())
	throw Form::GradeTooLowException();
    std::cout << "*some drilling noises*" << std::endl;
    srand((unsigned)time(0));
    success = rand() % 2;
    std::cout << executor.getName() << " executs " << "RobotomyRequestForm" << std::endl;
    if (success)
	std::cout << this->_target << " has been robotized successfully!" << std::endl;
    else
	std::cout << "Robotization for " << this->_target << " failed :(." << std::endl;
}

