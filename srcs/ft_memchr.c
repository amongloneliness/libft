#include "libft.h"

/*
** Scan memory for a character and return pointer or null.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*pointer_s;

	pointer_s = (char *) s;
	while (n-- > 0)
	{
		if (*pointer_s == (char) c)
			return ((void *) pointer_s);
		pointer_s++;
	}
	return ((void *) 0);
}
