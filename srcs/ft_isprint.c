#include "libft.h"

/*
** Return nonzero if character is printable.
*/
int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126) * 16384);
}
