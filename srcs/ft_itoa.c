#include "libft.h"

/*
** Calculates the length of a number.
*/
int	ft_nbrlen(int n)
{
	int	counter;

	counter = n == 0;
	while (n != 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

/*
** Allocates memory and returns a string representing
** the integer given as argument. Negative numbers need
** to be processed.
*/
char	*ft_itoa(int n)
{
	char	*s;
	int		n_len;
	int		is_negative;

	is_negative = n < 0;
	if (is_negative)
		n = -n;
	n_len = ft_nbrlen(n) + is_negative;
	s = (char *) malloc(sizeof(char) * (size_t)(n_len + 1));
	s[n_len] = '\0';
	if (is_negative)
		s[0] = '-';
	while (--n_len >= is_negative)
	{
		s[n_len] = n % 10 + '0';
		n /= 10;
	}
	return (s);
}
