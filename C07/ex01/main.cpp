#include <iostream>
#include "iter.hpp"

template <typename T>

void	doubleIt(T &a)
{
    a *= 2;
}

int main(void)
{
    int	array1[5] = {0, 1, 2, 3, 4};
    float   array2[5] = {0.00, 1.2635, -6.23, 98.002, 0.75};
    int	i;

    std::cout << "Before iter (arrayer of int): " << std::endl;
    for (i = 0; i < 5; i++)
	std::cout << array1[i] << std::endl;
    iter<int>(array1, 5, &doubleIt);
    std::cout << "After iter (arrayer of int): " << std::endl;
    for (i = 0; i < 5; i++)
	std::cout << array1[i] << std::endl;
    std::cout << "Before iter (arrayer of double): " << std::endl;
    for (i = 0; i < 5; i++)
	std::cout << array2[i] << std::endl;
    iter<float>(array2, 5, &doubleIt);
    std::cout << "After iter (arrayer of double): " << std::endl;
    for (i = 0; i < 5; i++)
	std::cout << array2[i] << std::endl;
    return (0);
}
