#include "libft.h"

void *calloc(size_t nitems, size_t size)
{
    void *arry ;
    size_t total; 
    total = size * nitems;
    arry = malloc(total);
    if (arry == NULL)
    {
        return NULL;
    }
    ft_memset(arry, 0 , total);
    return arry;
}