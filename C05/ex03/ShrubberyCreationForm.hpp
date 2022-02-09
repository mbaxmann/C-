#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    public:
	    ShrubberyCreationForm(std::string target);
	    ShrubberyCreationForm(const ShrubberyCreationForm &src);
	    virtual ~ShrubberyCreationForm(void);

	    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
	    virtual void execute(Bureaucrat const &executor) const;
	    std::string getTarget(void) const;
    private:
	    std::string _target;
	    ShrubberyCreationForm(void);
};

#endif
