#include "libft.h"

/*
** Return alphabet character, but convert to upper-case.
*/
int	ft_toupper(int c)
{
	if (c >= -128 && c <= -2)
		return ((int)(unsigned char) c);
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
