#include "convert_str.hpp"

int	get_type(std::string str)
{
    if (is_char(str))
	return (CHAR);
    else if (is_int(str))
	return (INT);
    else if (is_float(str))
	return (FLOAT);
    else if (is_double(str))
	return (DOUBLE);
    else if (is_special(str))
	return (SPECIAL);
    return (-1);
}

void	convert_str(std::string str)
{
    int	type;

    type = get_type(str);
    switch (type)
    {
	case CHAR:
		display_char(str);
		break;
	case INT:
		display_int(str);
		break;
	case FLOAT:
		display_float(str);
		break;
	case DOUBLE:
		display_double(str);
		break;
	case SPECIAL:
		display_special(str);
		break;
	default:
		std::cout << "Error: invalid argument" << std::endl;
    }
}
