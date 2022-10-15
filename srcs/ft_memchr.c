#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *cstr = (char *) s;

    for (size_t i = 0; i < n; i++) {
        if (cstr[i] == (char) c)
            return &cstr[i];
    }

    return (void *) 0;
}