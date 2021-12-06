#include <iostream>
#include <fstream>

int main(void)
{
    std::ifstream   ifs("test.txt");
    std::string	    tmp;

    ifs >> tmp;
    std::cout << tmp << std::endl;
    return (0);
}
