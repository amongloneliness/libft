#include "libft.h"

/*
** Returns a pointer to dest. copies n bytes from
** memory area src to memory area dest.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pointer_dest;
	const char	*pointer_src;

	pointer_dest = (char *) dest;
	pointer_src = (const char *) src;
	if (pointer_src < pointer_dest)
	{
		pointer_src += n;
		pointer_dest += n;
		while (n-- > 0)
			*--pointer_dest = *--pointer_src;
	}
	else if (src != dest)
	{
		while (n-- > 0)
			*pointer_dest++ = *pointer_src++;
	}
	return ((void *) pointer_dest);
}
