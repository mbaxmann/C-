#include "Karen.hpp"

Karen::Karen(void)
{
    this->_intab[0] = "DEBUG";
    this->_intab[1] = "INFO";
    this->_intab[2] = "WARNING";
    this->_intab[3] = "ERROR";
}

Karen::~Karen(void){}

void	Karen::complain(std::string level)
{
    void    (Karen::*fct[4])(void)= {
	&Karen::debug,
	&Karen::info,
	&Karen::warning,
	&Karen::error,
    };
    for (int i = 0; i < 4; i++)
	if (!level.compare(this->_intab[i]))
	    (this->*fct[i])();
}

void	Karen::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
}

void	Karen::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
