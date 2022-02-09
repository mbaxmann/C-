#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

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
	    int _grade;
	    const std::string _name;

	    Bureaucrat(void);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &src);

#endif
