#include "libft.h"



int atoi(const char *str)
{
    int i;
    int sing;

    i = 0;
    sing = 1;
    if(*str == ' ' ||  (*str >= 8 && *str <= 13 ))
    {
        str++;
    }
    if(*str == '-')
    {
        sing *= -1;
    }

    while(*str >='0' && *str <= '9')
    {
        i += ('0'- *str);
        i *= 10; 
    }
    return i * sing;
}