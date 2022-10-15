#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    char *d = dst;
    char *s = (char *) src;
    size_t n = size;
    size_t i = 0;

    while (((d[i] = s[i]) != '\0') && --n > 0)
        i++;

    if (n == 0) {
        if (size != 0) {
            *d = '\0';
        }
        
        while (*s++);
    }

    return ft_strlen(src);
}