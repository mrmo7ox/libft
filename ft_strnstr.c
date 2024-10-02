#include "libft.h"



char *strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    size_t little_len;

    little_len = ft_strlen(little);
    i = 0;
    if (little_len == 0) return (char *)big; 
    while(big[i] !='\0' && i < len)
    {
        j = 0;
        while(big[i + j] == little[j] && (j + i) < len &&  little[j] != '\0')
        {
            j++;
        }

       if(little_len == j)
       {
        return (char *)&big[i] ;
       }
        i++;
    }

    return NULL;
}

