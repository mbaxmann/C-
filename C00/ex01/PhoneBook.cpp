#include "main.h"

phonebook::phonebook(void)
{
    this->_contact_nb = 0;
    this->_exit_status = 0;
    return ;
}

void	phonebook::add(void)
{
    if (this->_contact_nb == 8)
    {
	std::cout << "Your phonebook is full ! You can't add more contacts." << std::endl;
	return ;
    }
    this->_list[this->_contact_nb].init();
    this->_contact_nb++;
    return ;
}

void	phonebook::exit(void)
{
    this->_exit_status = 1;
    return ;
}

int	phonebook::getexit_status(void)
{
    return (this->_exit_status);
}

static void ft_display(std::string str)
{
    if (str.size() > 9)
    {
        str = str.substr(0, 9);
	str += ".";
    }
    std::cout << std::setw(10) << str << "|";
    return ;
}

static void ft_choose(contact list[8])
{
    std::string	id;
    contact	current;
    int		valid;

    id = "ooo";
    valid = 0;
    while (1)
    {
	std::cout << "Please enter and ID: ";
	std::cin >> id;
	valid = id.find_first_of("12345678", 0);
	if (id.size() > 1 || valid == -1)
	    std::cout << "Invalid id, please try again." << std::endl;
	else
	    break ;
    }
    current = list[std::stoi(id) - 1];
    std::cout << "first name: " << current.first_name << std::endl;
    std::cout << "last name: " << current.last_name << std::endl;
    std::cout << "nickname: " << current.nickname << std::endl;
    std::cout << "Phone number: " << current.phone_number << std::endl;
    std::cout << "Darkest secret: " << current.darkest_secret << std::endl;
    return ;
}

void	phonebook::search(void)
{
    int	    i;
    contact tmp;

    i = 0;
    std::cout << std::setw(10) << "INDEX" << "|";
    std::cout << std::setw(10) << "FIRST NAME" << "|";
    std::cout << std::setw(10) << "LAST NAME" << "|";
    std::cout << std::setw(10) << "NICKNAME" << "|" << std::endl;
    while (i < this->_contact_nb)
    {
	tmp = this->_list[i];
	std::cout << std::setw(10) << i + 1 << "|";
	ft_display(tmp.first_name);
	ft_display(tmp.last_name);
	ft_display(tmp.nickname);
	std::cout << std::endl;
	i++;
    }
    if (this->_contact_nb)
	ft_choose(this->_list);
    return ;
}
