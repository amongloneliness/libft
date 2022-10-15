#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{   
    if (n > 0) {
        unsigned char *cdest = (unsigned char *) dest;
        const unsigned char *csrc = (unsigned char *) src;

        do {
            if ((*cdest++ = *csrc++) == (unsigned char) c)
                return (void *) (dest);
        } while (--n != 0);
    }

    return ((void *) 0);
}