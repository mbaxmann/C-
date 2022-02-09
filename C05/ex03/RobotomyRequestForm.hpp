#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
	    RobotomyRequestForm(std::string target);
	    RobotomyRequestForm(const RobotomyRequestForm &src);
	    virtual ~RobotomyRequestForm(void);

	    RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
	    virtual void execute(Bureaucrat const &executor) const;
	    std::string getTarget(void) const;
    private:
	    std::string _target;
	    RobotomyRequestForm(void);
};

#endif

