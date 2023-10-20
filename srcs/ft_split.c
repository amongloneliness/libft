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
** Filling an array with a null pointer.
*/
char	**ft_create_empty_arr(size_t sz)
{
	size_t	index;
	char	**arr;

	index = 0;
	arr = (char **) malloc(sizeof(char *) * (sz + 1));
	while (index <= sz)
		arr[index++] = (char *) 0;
	return (arr);
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
	char	*temp_s;
	char	*sub_s;

	index = 0;
	sz = 0;
	if (s != (char *) 0)
		sz = ft_countchr(s, c) + 1;
	arr = ft_create_empty_arr(sz);
	while (s != (char *) 0 && *s != '\0')
	{
		sub_s = ft_substr(s, 0, 1);
		temp_s = ft_strdup(arr[index]);
		free(arr[index]);
		if (*s == c)
			arr[index] = ft_strjoin(temp_s, sub_s);
		else
			arr[index++] = ft_strjoin(temp_s, "\0");
		free(temp_s);
		free(sub_s);
		s++;
	}
	return (arr);
}
