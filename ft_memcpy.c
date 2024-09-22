#include "libft.h"

void *ft_memcpy ( void *destination, const void *source, size_t num )
{

    unsigned char *new_dest;
    const unsigned char *new_src;
    size_t i;

    new_dest = (unsigned char *) destination;
    new_src = (unsigned char *) source;
    i = 0;


    while (i < num)
    {
        new_dest[i] = new_src[i];
        i++;
    }
    return destination;

}


