#include "libft.h"

/*
** Searches for the first occurence of the character in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	while ((int) *s != c && *s != '\0')
		s++;
	if (*s == (char) c)
		return ((char *) s);
	else
		return ((char *) 0);
}
