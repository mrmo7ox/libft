#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *trimed_s1;
    size_t start;
    size_t end;
    size_t lenght_s1;
    
    if (!s1 || !set)
        return (NULL);
    start = 0;
    end = strlen(s1);
    while(s1[start] == set[start])
        start++;
    while(s1[end] == set[end])
        end--;
    lenght_s1 = end - start;
    trimed_s1 = (char *) malloc(sizeof(char) *(lenght_s1 + 1));
    if(trimed_s1 == NULL)
        return NULL;
    strncpy(trimed_s1,&s1[start],lenght_s1);
    trimed_s1[lenght_s1 + 1] = '\0';
    return trimed_s1; 
}