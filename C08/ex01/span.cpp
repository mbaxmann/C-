#include "span.hpp"
#include <ctime>
#include <cstdlib>

Span::Span(unsigned int n)
{
    this->_n = n;
}

Span::Span(const Span &src)
{
    *this = src;
}

Span::~Span(void)
{
}

Span	&Span::operator=(const Span &src)
{
    if (this == &src)
	return (*this);
    this->_n = src._n;
    this->_vector = src._vector;
    return (*this);
}

void	Span::addNumber(int number)
{
    if (this->_vector.size() == this->_n)
	throw Span::exceptionFull();
    this->_vector.push_back(number);
}

unsigned int	Span::shortestSpan(void)
{
    std::vector<int>::iterator itr;
    std::vector<int> tmp = this->_vector;
    unsigned int Span;

    if (this->_vector.size() < 2)
	throw exceptionNotEnough();
    std::sort(tmp.begin(), tmp.end());
    itr = tmp.begin();
    Span = *(itr + 1) - *itr;
    while ((itr + 1) != tmp.end())
    {
	if ((*(itr + 1) - *itr) < Span)
	    Span = *(itr + 1) - *itr;
	++itr;
    }
    return (Span);
}

unsigned int	Span::longestSpan(void)
{
    std::vector<int>::iterator smallest;
    std::vector<int>::iterator biggest;
    unsigned int Span;

    if (this->_vector.size() < 2)
	throw exceptionNotEnough();
    smallest = std::min_element(this->_vector.begin(), this->_vector.end());
    biggest = std::max_element(this->_vector.begin(), this->_vector.end());
    Span = static_cast<unsigned int>(*biggest - *smallest);
    return (Span);
}

static int randomNumber(void)
{
    return (std::rand() % 10000);
}

void	Span::randomFill(void)
{
    this->_vector.insert(this->_vector.begin(), this->_n, 0);
    std::srand(unsigned(std::time(NULL)));
    std::generate(this->_vector.begin(), this->_vector.end(), randomNumber);
}
