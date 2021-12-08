#include "Karen.hpp"

int getlevel(std::string str)
{
    std::string tab[4]= {
	"ERROR",
	"WARNING",
	"INFO",
	"DEBUG",
    };
    for (int i = 0; i < 4; i++)
	if (!str.compare(tab[i]))
	    return (i + 1);
    return (-1);
}

void	display(Karen karen, int i)
{
    switch (i)
    {
	case 4:
	    karen.complain("DEBUG");
	    break;
	case 3:
	    karen.complain("INFO");
	    break;
	case 2:
	    karen.complain("WARNING");
	    break;
	case 1:
	    karen.complain("ERROR");
	    break;
	default:
	    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	    break;
    }
    std::cout << std::endl;
}

int main(int ac, char **av)
{
    Karen	karen;
    int		i;
    std::string	tmp;

    if (ac < 2)
	return (0);
    else
    {
	i = getlevel(av[1]);
	if (i == -1)
	    display(karen, -1);
	for (i; i > 0; i--)
	    display(karen, i);
    }
    return (0);
}
