#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
    public:
	    Bureaucrat(std::string name, int note);
	    Bureaucrat(const Bureaucrat &src);
	    ~Bureaucrat(void);

	    Bureaucrat &operator=(const Bureaucrat &src);
	    std::string getName(void) const;
	    int		getGrade(void) const;
	    void	incGrade(void);
	    void	decGrade(void);
	    void	signForm(Form &src);
	    void	executeForm(Form const &form);

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
    private:
	    const std::string _name;
	    int _grade;

	    Bureaucrat(void);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src);

#endif
