
#include "libft.h"

int ft_isprint(int c)
{
    if((c >= 32 && c < 126) || (c == 32) )
    {
        return 1;
    }
    return 0;
}
