#include "libft.h"

/*
** Copy memory to memory until the specified
** number of bytes has been copied.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pointer_dest;
	char	*pointer_src;

	pointer_dest = (char *) dest;
	pointer_src = (char *) src;
	while (n-- > 0)
	{
		*pointer_dest++ = *pointer_src++;
	}
	return (dest);
}
