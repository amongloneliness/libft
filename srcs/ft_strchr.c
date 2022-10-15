#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    while ((int) *s != (int) c && *s != '\0') {
        s++;
    }

    if (*s == (char) c) {
        return (char *) s;
    } else {
        return (char *) NULL;
    }
}