#include "convert_str.hpp"

static void display(char c, int i, double d, float f)
{
    if (c <= 32 || c == 127)
	std::cout << "char: Non displayable" << std::endl;
    else
	std::cout << "char: " << "'" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    if (f == static_cast<int>(f))
    {
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
    }
    else
    {
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d  << std::endl;
    }
}

void	display_char(std::string str)
{
    char    c = str[0];

    display(c, static_cast<int>(c), static_cast<double>(c), static_cast<float>(c));
}

void	display_int(std::string str)
{
    std::stringstream ss;
    int i;

    ss << str;
    ss >> i;
    display(static_cast<char>(i), i, static_cast<double>(i), static_cast<float>(i));
}

void	display_double(std::string str)
{
    std::stringstream ss;
    double i;

    ss << str;
    ss >> i;
    display(static_cast<char>(i), static_cast<int>(i), i, static_cast<float>(i));
}

void	display_float(std::string str)
{
    std::stringstream ss;
    float i;

    ss << str;
    ss >> i;
    display(static_cast<char>(i), static_cast<int>(i), static_cast<double>(i), i);
}

void	display_special(std::string str)
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    if (str[0] == 'n')
	std::cout << "float: nanf" << std::endl << "double: nan" << std::endl;
    else if (str[0] == '-')
	std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl;
    else if (str[0] == '+')
	std::cout << "float: +inff" << std::endl << "double: +inf" << std::endl;
    else
	std::cout << "float: inff" << std::endl << "double: inf" << std::endl;
}
