#include "libft.h"

/*
** Allocates memory and gets a new code, which is
** the basis of the union of s1 and s2.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res_str;
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	if (s1 == (char *) 0 && s2 == (char *) 0)
		return ((char *) 0);
	if (s1 != (char *) 0)
		len += ft_strlen(s1);
	if (s2 != (char *) 0)
		len += ft_strlen(s2);
	res_str = (char *) malloc(sizeof(char) * (len + 1));
	res_str[len] = '\0';
	if (s1 != (char *) 0)
	{
		while (*s1 != '\0')
			res_str[index++] = *s1++;
	}
	if (s2 != (char *) 0)
	{
		while (*s2 != '\0')
			res_str[index++] = *s2++;
	}
	return (res_str);
}
