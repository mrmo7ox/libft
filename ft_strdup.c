#include "libft.h"

char *ft_strdup(const char *s)
{
    char *new_s;
    size_t i ;
    size_t lenght;

    if(s == NULL)
        return NULL;
    lenght = strlen(s);
    i = 0;
    new_s = (char *)malloc((lenght + 1) *sizeof(char));
    if(new_s == NULL)
        return NULL;
    while(i < lenght)
    {
        new_s[i] = s[i];
        i++;
    }
    new_s[i] ='\0';
    return new_s;
}
