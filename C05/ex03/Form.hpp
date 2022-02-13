#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    public:
	    Form(std::string name, int gradeToSign, int gradeToExecute);
	    Form(const Form &src);
	    virtual ~Form(void);

	    Form &operator=(const Form &src);
	    std::string	getName(void) const;
	    int		getGradeToSign(void) const;
	    int		getGradeToExecute(void) const;
	    bool	getIsSigned(void) const;
	    void	beSigned(Bureaucrat &src);
	    virtual void    execute(Bureaucrat const &executor) const = 0;
	    class GradeTooHighException : public std::exception
	    {
		public:
			virtual const char *what(void) const throw();
	    };
	    class GradeTooLowException : public std::exception
	    {
		public:
			virtual const char *what(void) const throw();
	    };
	    class NotSignedException : public std::exception
	    {
		public:
			virtual const char *what(void) const throw();
	    };
	    class FilestreamException : public std::exception
	    {
		public:
			virtual const char *what(void) const throw();
	    };
    private:
	    const std::string	_name;
	    const int		_gradeToSign;
	    const int		_gradeToExecute;
	    bool		_isSigned;

	    Form(void);
};

std::ostream &operator<<(std::ostream &o, const Form &src);

#endif
