#include "libft.h"

/*
** Allocates memory and returns a copy of s1 with the characters
** specified in set removed from the beginning and end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	index;
	size_t	begin;
	size_t	end;

	if (s1 == (char *) 0 || ft_strlen(s1) == 0)
		return ((char *) 0);
	index = 0;
	begin = 0;
	end = ft_strlen(s1) - 1;
	while (s1[begin] != '\0' && ft_strchr(set, (int) s1[begin]) != (char *) 0)
		begin++;
	while (end > 0 && ft_strchr(set, (int) s1[end]) != (char *) 0)
		end--;
	if (end < begin)
		end = begin;
	res = (char *) malloc(sizeof(char) * (end - begin + 2));
	res[end - begin + 1] = '\0';
	while (begin <= end)
		res[index++] = s1[begin++];
	return (res);
}
