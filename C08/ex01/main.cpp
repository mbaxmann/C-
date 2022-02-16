#include "span.hpp"
#include <iostream>

int main(void)
{   
    Span sp = Span(6);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(16);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl << std::endl;

    Span bigSpan = Span(1000);

    bigSpan.randomFill();
    std::cout << bigSpan.shortestSpan() << std::endl;
    std::cout << bigSpan.longestSpan() << std::endl;
    try
    {
	Span tmp = Span(2);
	tmp.addNumber(5);
	tmp.addNumber(5);
	tmp.addNumber(5);
    }
    catch (std::exception &e)
    {
	std::cerr << e.what() << std::endl;
    }
    try
    {
	Span tmp = Span(1);
	tmp.addNumber(5);
	tmp.shortestSpan();
	tmp.longestSpan();
    }
    catch (std::exception &e)
    {
	std::cerr << e.what() << std::endl;
    }
    return (0);
}
