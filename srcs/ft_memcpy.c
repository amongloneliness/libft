#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *cdest = (char *) dest;
    char *csrc = (char *) src;

    while (n-- > 0) {
        *cdest++ = *csrc++;
    }

    return (char *) dest;
}