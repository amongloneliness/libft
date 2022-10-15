#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    const size_t dstlen = ft_strnlen(dst, size);
    const size_t srclen = ft_strlen(src);

    if (dstlen == size)
        return (size + srclen);

    if (srclen < size - dstlen) {
        ft_memcpy(dst + dstlen, src, srclen + 1);
    } else {
        ft_memcpy(dst + dstlen, src, size + 1);
        dst[dstlen + size - 1] = '\0';
    }

    return (dstlen + srclen);
}