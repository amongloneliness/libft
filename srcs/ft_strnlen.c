#include "libft.h"

size_t ft_strnlen(const char *s, size_t maxlen)
{
    size_t len = 0;

    while (*s++ != '\0' && len < maxlen)
        len++;

    return len;
}