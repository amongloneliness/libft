#include "libft.h"

/*
** Find the first occurrence of find in s, where the search is limited
** to the first slen characters of s.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;

	if (*needle == '\0')
	{
		return ((char *) haystack);
	}
	len = ft_strlen(needle);
	if (len > n)
		len = n;
	while (*haystack && ft_strncmp(haystack, needle, len) != 0)
	{
		haystack++;
	}
	if (ft_strncmp(haystack, needle, len) == 0)
	{
		return ((char *) haystack);
	}
	return ((char *) 0);
}
