#include <iostream>

void	ft_toupper(char *str)
{
    int	i;

    i = 0;
    while (str[i])
    {
	if (str[i] >= 'a' && str[i] <= 'z')
	    str[i] -= 32;
	i++;
    }
}

int main(int ac, char **av)
{
    int	i;

    if (ac == 1)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
	i = 1;
	while (av[i])
	{
	    ft_toupper(av[i]);
	    std::cout << av[i];
	    i++;
	}
	std::cout << std::endl;
    }
    return (0);
}
