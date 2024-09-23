#include "libft.h"


int ft_strncmp(const char *str1, const char *str2, size_t n)
{

    size_t i;

    i = 0;
    while (n > i && str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i] )
    {
        i++;
    }
    
    return (str1[i] - str2[i]);
}
