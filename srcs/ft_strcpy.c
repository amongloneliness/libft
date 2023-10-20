#include "libft.h"

/*
** Copy the string src to dst and return dest.
*/
char	*ft_strcpy(char *dst, const char *src)
{
	const size_t	len = ft_strlen(src);

	return (ft_memcpy(dst, src, len + 1));
}
