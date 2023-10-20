#include "libft.h"

/*
** Return nonzero if argument is an alphanumeric character, else - 0.
*/
int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)) * 8);
}
