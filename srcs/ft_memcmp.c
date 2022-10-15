#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    if (n != 0) {
        const unsigned char *p1 = (unsigned char *) s1;
        const unsigned char *p2 = (unsigned char *) s2;

        do {
            if (*p1++ != *p2++)
                return (*--p1 - *--p2);
        } while (--n != 0);
    }

    return 0;
}