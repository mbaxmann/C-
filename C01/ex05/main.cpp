#include "Karen.hpp"

int main(void)
{
    Karen   karen;

    karen.complain("DEBUG");
    karen.complain("INFO");
    karen.complain("DEBUG");
    karen.complain("WARNING");
    karen.complain("WARNING");
    karen.complain("ERROR");
    return (0);
}
