#include "libft.h"


char *ft_strrchr(const char *s, int c)
{
    size_t lenght;

    lenght = ft_strlen(s);

    while (lenght > 0)
    {
        if (s[lenght] == (char )c)
        {
            return (char *) &s[lenght];
        }
        lenght--;
    }
    return NULL;
}

