#include "libft.h"

int ft_isalpha( int c)
{
    if ((c >= 'a' && c <= 'z'))
    {
        return 2;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return 1;
    }
    
    return 0;
}
