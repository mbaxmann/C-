#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T>

class MutantStack : public std::stack<T>
{
    public:
	    typedef typename std::stack<T>::container_type::iterator iterator;

	    MutantStack(void) : std::stack<T>()
	    {
	    }
	    MutantStack(const MutantStack &src) : std::stack<T>(src)
	    {
	    }
	    virtual ~MutantStack(void)
	    {
	    }

	    MutantStack &operator=(const MutantStack &src)
	    {
		if (this != &src)
		    this->c = src.c;
		return (*this);
	    }
	    iterator begin(void)
	    {
		return (this->c.begin());
	    }
	    iterator end(void)
	    {
		return (this->c.end());
	    }
};

#endif
