#include "libft.h"

char *ft_strnstr(const char *s, const char *find, size_t n)
{
	char c, sc;
	size_t len;

	if ((c = *find++) != '\0') {
		len = ft_strlen(find);

		do {
			do {
				if (n-- < 1 || (sc = *s++) == '\0')
					return (char *) (NULL);
			} while (sc != c);

			if (len > n)
				return (char *) (NULL);
		} while (ft_strncmp(s, find, len) != 0);

		s--;
	}

	return ((char *)s);
}