#include "libft.h"

/*
** Compares the first n bytes of memory area str1 and memory area str2.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	if (n != 0)
	{
		p1 = (unsigned char *) s1;
		p2 = (unsigned char *) s2;
		while (n-- > 0)
		{
			if (*p1++ != *p2++)
				return (*--p1 - *--p2);
		}
	}
	return (0);
}
