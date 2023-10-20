#include "libft.h"

/*
** Copies the source src to end of the destination dst char array.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const char	*s = src;
	char		*pointer_dst;
	size_t		n;
	size_t		dstlen;

	n = size;
	pointer_dst = dst;
	while (n-- != 0 && *pointer_dst != '\0')
		pointer_dst++;
	dstlen = pointer_dst - dst;
	n = size - dstlen;
	if (n == 0)
		return (dstlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*pointer_dst++ = *s;
			n--;
		}
		s++;
	}
	*pointer_dst = '\0';
	return (dstlen + (s - src));
}
