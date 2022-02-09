#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
	    PresidentialPardonForm(std::string target);
	    PresidentialPardonForm(const PresidentialPardonForm &src);
	    virtual ~PresidentialPardonForm(void);

	    PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
	    virtual void execute(Bureaucrat const &executor) const;
	    std::string getTarget(void) const;
    private:
	    std::string _target;
	    PresidentialPardonForm(void);
};

#endif

