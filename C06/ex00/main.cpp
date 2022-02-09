#include "convert_str.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
	std::cout << "Error: Wrong number of argument" << std::endl;
    else
	convert_str(av[1]);
    return (0);
}
