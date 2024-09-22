#include "libft.h"



int ft_tolower(int c)
{
    char new_value;

    if (c >= 65 && c <= 90 )
    {
        new_value = c + 32;
        return new_value;
    }
    return c;
}
