#include "libft.h"


int ft_toupper(int c)
{
    char new_value;

    if (c >= 97 && c <= 122 )
    {
    new_value = c - 32;
    return new_value;
    }
    return c;
}
