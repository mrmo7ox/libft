#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while(*s)
    {
        if(c == *s)
        {
            return s;
        }
        s++;
    }

    return NULL;
}


int main()
{
    char *test = "hhcjjj";
   printf("%s",  ft_strchr(test,'c'));
}