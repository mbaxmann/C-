#ifndef CONVERT_STR_HPP
# define CONVERT_STR_HPP

#include <iostream>
#include <sstream>
#include <climits>

enum {CHAR, INT, FLOAT, DOUBLE, SPECIAL};

void	display_int(std::string str);
void	display_float(std::string str);
void	display_double(std::string str);
void	display_char(std::string str);
void	display_special(std::string str);
void	convert_str(std::string str);
int	get_type(std::string str);
bool	is_char(std::string str);
bool	is_float(std::string str);
bool	is_int(std::string str);
bool	is_double(std::string str);
bool	is_special(std::string str);

#endif
