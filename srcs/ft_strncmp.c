#include "libft.h"

/*
**	Compares at most the first n bytes of string 1 and string 2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = '\0';
	c2 = '\0';
	while (n-- > 0)
	{
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;
		if (c1 == '\0' || c1 != c2)
			break ;
	}
	return ((int)(c1 - c2));
}
