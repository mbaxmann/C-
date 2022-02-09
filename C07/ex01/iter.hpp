#ifndef ITER_HPP
# define ITER_HPP

template <typename T>

void	iter(T *array, int length, void (*funct)(T const &data))
{
    for (int i = 0; i < length; ++i)
	funct(array[i]);
}

#endif
