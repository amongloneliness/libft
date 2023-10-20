#include "libft.h"

/*
** Determine the length of a fixed-size string.
*/
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++ != '\0')
		len++;
	return (len);
}
