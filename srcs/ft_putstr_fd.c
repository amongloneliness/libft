#include "libft.h"

/*
** Prints the string s to the stream specified by the file descriptor.
*/
void	ft_putstr_fd(char *s, int fd)
{
	if (s == (char *) 0)
		return ;
	while (*s != '\0')
		write(fd, s++, 1);
}
