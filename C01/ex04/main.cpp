#include <iostream>
#include <fstream>

void	    strreplacestr(std::string &tmp, std::string s1, std::string s2)
{
    size_t  pos;
    size_t  ret;

    pos = 0;
    while (pos < tmp.size())
    {
	ret = tmp.find(s1, pos);
	if (ret != tmp.npos)
	{
	    tmp.erase(ret, s1.size());
	    tmp.insert(ret, s2);
	    pos = ret + s2.size();
	}
	else
	    break ;
    }
}

void	    replace(char **av)
{
    std::string	tmp;
    std::string	output;
    std::ifstream   ifs(av[1]);

    if (!ifs.is_open())
    {
	std::cout << "Error: no such file " << av[1] <<std::endl;
	return ;
    }
    output = av[1];
    output += ".REPLACE";
    std::ofstream ofs(output);
    while (true)
    {
	std::getline(ifs, tmp);
	if (ifs.eof() == true)
	    break ;
	strreplacestr(tmp, av[2], av[3]);
	ofs << tmp << std::endl;
    }
    ifs.close();
    ofs.close();
}

int main(int ac, char **av)
{
    int		error = 0;
    std::string	tmp;

    if (ac != 4)
	std::cout << "Error: wrong number of arguement." << std::endl;
    else
    {
	tmp = av[2];
	if (!tmp.compare(""))
	    error += 1;
	tmp = av[3];
	if (!tmp.compare(""))
	    error += 1;
	if (!error)
	    replace(av);
	else
	    std::cout << "Error: Invalide argument, string must not be empty !" << std::endl;
    }
    return (0);
}
