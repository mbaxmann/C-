#include <string>
#include <iostream>

int main(void)
{
    std::string	brain;
    std::string	*stringPTR = &brain;
    std::string	&stringREF = brain;

    brain = "HI THIS IS BRAIN";
    std::cout << "String address memory: " << &brain << std::endl;
    std::cout << "String address using stringPTR: " << stringPTR << std::endl;
    std::cout << "String address using stringREF: " << &stringREF << std::endl;
    std::cout << "Display of the string using the pointer: " << *stringPTR << std::endl;
    std::cout << "Display of the string using the reference: " << stringREF << std::endl;
    return (0);
}
