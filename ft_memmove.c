#include "libft.h"



void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *new_dest;
    unsigned char *new_src;
    size_t i;

    i = 0;
    new_dest = (unsigned char *) dest;
    new_src = (unsigned char *) src;

    if (new_dest < new_src)
    {    
        while(i < n)
        {
            new_dest[i] = new_src[i];
            i++;
        }
    }
    else if (new_dest > new_src)
    {
        n = n - 1;
        while (i < n)
        {
            new_dest[n] = new_src[n];
            n--;
        }
    }
    
    return new_dest;
}

