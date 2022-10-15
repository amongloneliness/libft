#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *cdest = (char *) dest;
    const char *csrc = (char *) src;

    if (csrc < cdest)  {
        for (csrc += n, cdest += n; n != 0; --n) {
            *--cdest = *--csrc;
        }
    } else if (src != dest) {
        for (; n; --n)
            *cdest++ = *csrc++;
    }

    return cdest;
}