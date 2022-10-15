#include "libft.h"

char *ft_strcpy(char *dst, const char *src)
{
    const size_t len = ft_strlen(src);

    ft_memcpy(dst, src, len + 1);

    return dst;
}