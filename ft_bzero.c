#include "libft.h"


void ft_bzero(void *s, size_t n)
{
    unsigned char *new_ptr;
    size_t i;

    i = 0;
    new_ptr = (unsigned char *) s;
    while(i < n)
    {
        new_ptr[i] = 0; 
        i++;
    }
    
}
