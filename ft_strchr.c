#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(c == *s)
        {
            return (char *) s;
        }
        s++;
    }

    return NULL;
}
