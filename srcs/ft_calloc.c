#include "libft.h"

/*
** Allocate and free dynamic memory.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *) 0;
	if (nmemb == 0 || size == 0)
	{
		nmemb = 0;
		size = 0;
	}
	ptr = malloc(nmemb * size);
	if (ptr != (void *) 0)
	{
		ft_bzero(ptr, nmemb * size);
	}
	return (ptr);
}
