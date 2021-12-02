#ifndef CONTACT_HPP
# define CONTACT_HPP

class	contact
{
    public:
	    int	    index;
	    std::string  first_name;
	    std::string  last_name;
	    std::string  nickname;
	    std::string  phone_number;
	    std::string  darkest_secret;

	    void init(void);
	    contact(void);
	    ~contact(void);
};

#endif
