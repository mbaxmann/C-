#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <algorithm>

class my_exception : public std::exception
{
    virtual const char *what() const throw()
    {
	return ("Error: no result found");
    }
};

template <typename T>

typename T::iterator easyfind(T &container, int f)
{
    typename T::iterator itr;

    itr = std::find(container.begin(), container.end(), f);
    if (itr == container.end())
	throw my_exception();
    return (itr);
}

#endif
