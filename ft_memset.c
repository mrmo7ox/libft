#include "libft.h"



void *ft_memset(void *ptr, int value, size_t num)
{
    unsigned char *new_ptr;
    unsigned char new_value;
    size_t i;

    i = 0;
    new_ptr = (unsigned char *) ptr;
    new_value = (unsigned char)value;
    while(i < num)
    {
        new_ptr[i] = new_value; 
        i++;
    }
    
    return ptr;
}
