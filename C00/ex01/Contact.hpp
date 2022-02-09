#ifndef CONTACT_HPP
# define CONTACT_HPP

class	Contact
{
    public:
	    std::string getFirstName(void) const;
	    std::string getLastName(void) const;
	    std::string getNickname(void) const;
	    std::string getPhoneNumber(void) const;
	    std::string getDarkestSecret(void) const;
	    void init(void);
    private:
	    std::string  _first_name;
	    std::string  _last_name;
	    std::string  _nickname;
	    std::string  _phone_number;
	    std::string  _darkest_secret;
};

#endif
