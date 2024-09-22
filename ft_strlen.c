#include "libft.h"

size_t ft_strlen(const char *p)
{
    size_t i;

    i = 0;
    while(p[i] != 0)
    {
        i++;
    }

    return i;
}
