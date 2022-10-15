#include "libft.h"

char *ft_strdup(const char *s)
{
    int l = 0;
    char *t;

    if (s == (char *) NULL)
        return (char *) NULL;

    l = (int) ft_strlen(s);
    t = (char *) malloc(l + 1);
    
    ft_memcpy(t, s, l);
    t[l] = '\0';

    return t;
}