#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    if (c == '\0') {
        return ft_strchr(s, c);
    }

    const char *found = (const char *) NULL;
    const char *p;

    while ((p = ft_strchr(s, c)) != (const char *) NULL) {
        found = p;
        s = p + 1;
    }

    return (char *) found;
}