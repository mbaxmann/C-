#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	phonebook
{
    public:
	    int	contact_nb;
	    int	exit_status;
	    contact list[8];

	    void add(void);
	    void exit(void);
	    void search(void);
	    phonebook(void);
	    ~phonebook(void);
};

#endif
