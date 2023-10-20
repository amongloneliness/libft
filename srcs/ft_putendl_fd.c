#include "libft.h"

/*
** Prints the string s to the stream specified by
** the file descriptor, followed by a newline.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (s == (char *) 0)
		return ;
	while (*s != '\0')
		write(fd, s++, 1);
	ft_putchar_fd('\n', 1);
}
