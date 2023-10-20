#include "libft.h"

/*
** Count the number of characters in a string equal to с.
*/
size_t	ft_countchr(const char *s, const char c)
{
	size_t	counter;

	counter = 0;
	while (*s != '\0')
	{
		counter += *s == c;
		s++;
	}
	return (counter);
}

/*
** Allocates memory and returns an array of strings
** obtained by splitting s using c as the delimiter.
** The array must end with a NULL pointer.
*/
char	**ft_split(char const *s, char c)
{
	size_t	sz;
	size_t	index;
	char	**arr;

	index = 0;
	if (s != (char *) 0)
		sz = ft_countchr(s, c) + 1;
	else
		sz = 0;
	arr = (char **) malloc(sizeof(char *) * (sz + 1));
	arr[sz] = (char *) 0;
	while (s != (char *) 0 && *s != '\0')
	{
		if (*s != c)
			arr[index] = ft_strjoin(arr[index], ft_substr(s, 0, 1));
		else
		{
			arr[index] = ft_strjoin(arr[index], "\0");
			index++;
		}
		s++;
	}
	return (arr);
}
