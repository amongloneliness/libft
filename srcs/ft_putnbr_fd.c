#include "libft.h"

/*
** Outputs the integer n to the stream specified by the file descriptor.
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	*s;

	s = ft_itoa(n);
	while (*s != '\0')
		write(fd, s++, 1);
}
