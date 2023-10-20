#include "libft.h"

/*
** Prints the character c to the stream specified by the file descriptor.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
