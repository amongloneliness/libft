#include "libft.h"

/*
** Fill memory with a constant byte.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	char	*pointer;

	pointer = (char *) s;
	if (n != 0)
	{
		while (n-- > 0)
			*pointer++ = (char) c;
	}
	return (s);
}
