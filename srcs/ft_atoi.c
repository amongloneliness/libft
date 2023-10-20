#include "libft.h"

/*
** Convert a string to an integer.
*/
int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = *nptr == '-';
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr != '\0')
	{
		if (*nptr < '0' || *nptr > '9')
			break ;
		else
			nbr = nbr * 10 + *nptr - '0';
		nptr++;
	}
	if (sign > 0)
		return (-nbr);
	else
		return (nbr);
}
