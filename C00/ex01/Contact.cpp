#include "main.h"

void	Contact::init(void)
{
    std::cout << "First name: ";
    std::cin >> this->_first_name;
    std::cout <<  "Last name: ";
    std::cin >> this->_last_name;
    std::cout << "Nickname: ";
    std::cin >> this->_nickname;
    std::cout << "Phone number: ";
    std::cin >> this->_phone_number;
    std::cout << "Darkest secret: ";
    std::cin >> this->_darkest_secret;
    return ;
}

std::string Contact::getFirstName(void) const
{
    return (this->_first_name);
}

std::string Contact::getLastName(void) const
{
    return (this->_last_name);
}

std::string Contact::getNickname(void) const
{
    return (this->_nickname);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->_phone_number);
}

std::string Contact::getDarkestSecret(void) const
{
    return (this->_darkest_secret);
}
