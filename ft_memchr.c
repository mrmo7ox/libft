#include "libft.h"

void *memchr( const void *memoryBlock, int searchedChar, size_t size )
{
    size_t i;
    const unsigned char *new_pointer;

    new_pointer = (const unsigned char *) memoryBlock;  
    i = 0;

    while (i < size)
    {
        if(*new_pointer == (unsigned char)searchedChar)
        {
            return (void *) new_pointer;
        }
        i++;
        new_pointer++;
        
    }
    
    return NULL;

}
