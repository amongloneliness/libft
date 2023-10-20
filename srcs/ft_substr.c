#include "libft.h"

/*
** Allocates memory and returns a substring of strings s.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_index;
	size_t	start_index;
	size_t	slen;

	sub = (char *) 0;
	if (s == (char *) 0)
		return (sub);
	slen = ft_strlen(s);
	sub_index = 0;
	start_index = (size_t) start;
	if (start_index < slen)
	{
		if (start_index + len < slen)
			slen = start_index + len;
		sub = (char *) malloc(sizeof(char) * (slen - start_index));
		while (start_index < slen)
		{
			sub[sub_index++] = s[start_index++];
		}
		sub[slen] = '\0';
	}
	return (sub);
}
