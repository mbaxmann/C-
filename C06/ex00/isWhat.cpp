#include "convert_str.hpp"

bool	is_char(std::string str)
{
    int i = 0;

    if (((str[i] >= 0 && str[i] < '0') || (str[i] > '9' && str[i] <= 127))
	&& str[1] == '\0')
	return (true);
    return (false);
}

bool	is_int(std::string str)
{
    int i = 0;

    if (str[i] == '-')
	i++;
    while (str[i] >= '0' && str[i] <= '9')
	i++;
    if (str[i] == '\0')
	return (true);
    return (false);
}

bool	is_double(std::string str)
{
    int i = 0;

    if (str[i] == '-')
	i++;
    while (str[i] >= '0' && str[i] <= '9')
	i++;
    if (str[i] != '.')
	return (false);
    else
	i++;
    while (str[i] >= '0' && str[i] <= '9')
	i++;
    if (str[i] != '\0')
	return (false);
    return (true);
}

bool	is_float(std::string str)
{
    int i = 0;

    if (str[i] == '-')
	i++;
    while (str[i] >= '0' && str[i] <= '9')
	i++;
    if (str[i] != '.')
	return (false);
    else
	i++;
    while (str[i] >= '0' && str[i] <= '9')
	i++;
    if (str[i] == 'f' && str[i + 1] == '\0')
	return (true);
    return (false);
}

bool	is_special(std::string str)
{
    if (str == "inf" || str == "inff" || str == "+inf" || str == "+inff"
	|| str == "-inf" || str == "-inff" || str == "nan" || str == "nanf")
	return(1);
    else
	return(0);
}
