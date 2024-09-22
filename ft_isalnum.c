#include "libft.h"

int ft_isalnum(int c)
{
    if(ft_isalpha(c) || ft_isdigit(c) )
    {
        if (ft_isdigit(c))
        {   
            return 4;
        }
        if (ft_isdigit(c))
        {   
            return ft_isdigit(c);
        }
    }
    return 0;
}
