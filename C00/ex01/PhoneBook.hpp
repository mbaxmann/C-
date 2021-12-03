#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	phonebook
{
    public:
	    void    add(void);
	    void    exit(void);
	    void    search(void);
	    int	    getexit_status(void);
	    phonebook(void);
    private:
	    int	_contact_nb;
	    int	_exit_status;
	    contact _list[8];
};

#endif
