#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t s_lenght;
    size_t t_lenght;
    size_t i ;

    i = start;
    if (s == NULL)
        return NULL;
    s_lenght = strlen(s);
    if(start >= s_lenght)
    {
        return (char *)calloc(1,sizeof(char));
    }
    t_lenght = (s_lenght - start < len)  ? (s_lenght - start) :len ;
    sub = (char *)malloc(sizeof(char) * (t_lenght + 1)); 
    if (sub == NULL)
        return NULL;

    while (i < t_lenght)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return sub ;

}