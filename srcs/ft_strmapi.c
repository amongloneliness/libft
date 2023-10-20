#include "libft.h"

/*
** Applies the function f to each character of the string s
** to create a new string, allocating memory as a result of
** successive applications of f.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	index;
	char			*result;

	if (s == (char *) 0)
		return ((char *) 0);
	index = 0;
	len = (unsigned int) ft_strlen(s);
	result = (char *) malloc(sizeof(char) * (size_t)(len + 1));
	result[len] = '\0';
	while (index < len)
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	return (result);
}
