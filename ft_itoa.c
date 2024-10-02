#include "libft.h"

int cal_lenght(int n)
{
    int l;
    if(n <= 0)
        l = 1; 
    else
    {
        l = 0;
        n = -n; 
    }
    while(n != 0)
    {
        n /= 10;
        l++;
    }
    return l;
}

char *ft_itoa(int n)
{
    char *new_value;
    int l;

    l = cal_lenght(n);

    new_value = (char *)malloc(sizeof(char) * l);
    if(!new_value)
        return NULL;
    new_value[l] = '\0';
    if(n < 0)
    {
        new_value[0] = '-';
        n = -n;
    }
    if(n == 0)
    {
        new_value[0] = '0';
        return new_value;
    }
    while(n > 0)
    {
        new_value[--l] = (n % 10) + '0';
        n /= 10; 
    }
    return new_value;
}

