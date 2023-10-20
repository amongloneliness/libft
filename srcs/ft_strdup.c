#include "libft.h"

/*
** Dublicate a string.
*/
char	*ft_strdup(const char *s)
{
	int		l;
	char	*t;

	if (s == (char *) 0)
	{
		return ((char *) 0);
	}
	l = (int) ft_strlen(s);
	t = (char *) malloc(l + 1);
	ft_memcpy((void *) t, (void *) s, (size_t) l);
	t[l] = '\0';
	return (t);
}
