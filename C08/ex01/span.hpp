#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>

class Span
{
    public:
	    Span(unsigned int n);
	    Span(const Span &src);
	    ~Span(void);

	    Span &operator=(const Span &src);
	    void    addNumber(int number);
	    unsigned int	    shortestSpan(void);
	    unsigned int	    longestSpan(void);
	    void    randomFill(void);

	    class exceptionFull : public std::exception
	    {
		virtual const char *what() const throw()
		{
		    return ("Error: can't add anymore number");
		}
	    };
	    class exceptionNotEnough : public std::exception
	    {
		virtual const char *what() const throw()
		{
		    return ("Error: not enough number stored");
		}
	    };
    private:
	    std::vector<int> _vector;
	    unsigned int    _n;

	    Span(void);
};

#endif
