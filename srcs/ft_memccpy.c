#include "libft.h"

/*
** Copy memory to memory until the specified number of bytes has been copied.
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*pointer_dest;
	const unsigned char	*pointer_src;

	if (n > 0)
	{
		pointer_dest = (unsigned char *) dest;
		pointer_src = (unsigned char *) src;
		while (n-- != 0)
		{
			if (*pointer_dest == (unsigned char) c)
				return ((void *) dest);
			*pointer_dest++ = *pointer_src++;
		}
	}
	return ((void *) 0);
}
