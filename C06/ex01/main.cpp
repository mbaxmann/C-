#include "Data.hpp"
#include <stdint.h>

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data    *data = new Data;
    Data    *stock = data;
    uintptr_t	ptr;

    ptr = serialize(data);
    data = deserialize(ptr);
    if (data == stock)
	std::cout << "Succes! data value has been preserved" << std::endl;
    else
    {
	std::cout << "Echec, original data value was: " << stock << std::endl;
	std::cout << "Now is: " << data << std::endl;
    }
    delete stock;
    return (0);
}
