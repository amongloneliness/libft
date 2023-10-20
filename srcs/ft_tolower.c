#include "libft.h"

/*
** Return alphabet character, but convert to lower-case.
*/
int	ft_tolower(int c)
{
	if (c >= -128 && c <= -2)
		return ((int)(unsigned char) c);
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
