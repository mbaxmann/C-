#include "main.h"

void	contact::init(void)
{
    std::cout << "First name: ";
    std::cin >> this->first_name;
    std::cout <<  "Last name: ";
    std::cin >> this->last_name;
    std::cout << "Nickname: ";
    std::cin >> this->nickname;
    std::cout << "Phone number: ";
    std::cin >> this->phone_number;
    std::cout << "Darkest secret: ";
    std::cin >> this->darkest_secret;
    return ;
}
