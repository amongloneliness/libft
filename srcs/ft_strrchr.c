#include "libft.h"

/*
** Searches for the last occurence of the character in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*found;
	const char	*pointer;

	if (c == '\0')
	{
		return (ft_strchr(s, c));
	}
	else
	{
		found = (const char *) 0;
		pointer = ft_strchr(s, c);
		while (pointer != (const char *) 0)
		{
			found = pointer;
			s = pointer + 1;
			pointer = ft_strchr(s, c);
		}
		return ((char *) found);
	}
}
