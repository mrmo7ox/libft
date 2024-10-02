#include "libft.h"


int ft_memcmp ( const void *ptr1, const void *ptr2, size_t num )
{
    const unsigned char *new_ptr1;
    const unsigned char *new_ptr2;
    size_t i;

    i = 0;
    new_ptr1 = (const unsigned char  *) ptr1;
    new_ptr2 = ( const unsigned char *) ptr2;

    while( i < num && new_ptr1[i] == new_ptr2[i])
    {
        i++;
    }

    return (new_ptr1[i] - new_ptr2[i]);
}
