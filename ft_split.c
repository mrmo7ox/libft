
#include "libft.h"



int char_finder(char *s , char c)
{
    int i;
    
    i = 0;
    while (*s)
    {
        if(*s == c)
        {
            i++;
        }
        s++;
    }
    return i;
}

char **ft_split(char const *s, char c)
{
    char **tab;
    int words;
    int i ;
    int j ;
    int k;

    i = 0;
    j = 0;
    words = char_finder((char *)s, c);
    tab = (char **)malloc(sizeof(char *) * (words + 1));
    if(!tab)
        return NULL;

    while(s[j])
    {
        while(s[j] == c)
            j++;
        if(s[j] == '\0')
            break;
        k = 0;
        while (s[j + k] && s[j + k] != c )
            k++;
        tab[i] = malloc(sizeof(char) * (k +1 ));
        if(!tab[i])
        {
            while( i > 0)
                free(tab[--i]);
            free(tab);
            return NULL;
        }
        ft_memcpy(tab[i],s + j,k);
        tab[i][k] = '\0';
        i++;
        j += k; 
    }
    tab[i] = NULL;
    return tab;
}
