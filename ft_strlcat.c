#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t what_copy;
    size_t i;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    if (size <= dst_len)
        return size + src_len;
    what_copy = size - dst_len - 1;
    while(i < what_copy && src[i] != '\0')
    {
        dst[i + dst_len] = src[i];
        i++;    
    }
    dst[i + dst_len] = '\0';
    return dst_len + src_len;
}