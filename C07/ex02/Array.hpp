#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>

class Array
{
    public:
	    Array(void)
	    {
		this->_length = 0;
		this->_array = new T[this->_length];
	    }
	    Array(unsigned int n)
	    {
		this->_length = n;
		this->_array = new T[this->_length];
	    }
	    Array(Array const &src)
	    {
		this->_array = new T[0];
		*this = src;
	    }
	    ~Array(void)
	    {
		delete [] this->_array;
	    }

	    Array &operator=(Array const &src)
	    {
		if (this == &src)
		    return (*this);
		delete [] this->_array;
		this->_length = src._length;
		this->_array = new T[this->_length];
		for (int i = 0; i < this->_length; i++)
		    this->_array[i] = src._array[i];
		return (*this);
	    }
	    T	&operator[](int i)
	    {
		if (i < 0 || i >= this->_length)
		    throw(std::out_of_range("Error: Invalid index"));
		return (this->_array[i]);
	    }
	    unsigned int    size(void) const
	    {
		return (this->_length);
	    }
    private:
	    T	*_array;
	    unsigned int    _length;
};

#endif
