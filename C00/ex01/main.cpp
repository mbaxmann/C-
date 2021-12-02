#include "main.h"

void	execute_cmd(std::string cmd, phonebook *my_phone)
{
    if (!cmd.compare("ADD"))
	my_phone->add();
    else if (!cmd.compare("SEARCH"))
	my_phone->search();
    else if (!cmd.compare("EXIT"))
	my_phone->exit();
}

int main(void)
{
    phonebook	my_phone;
    std::string	cmd;

    while (!my_phone.exit_status)
    {
	std::cout << "Waiting for your input !: ";
	std::cin >> cmd;
	execute_cmd(cmd, &my_phone);
    }
    return (0);
}
