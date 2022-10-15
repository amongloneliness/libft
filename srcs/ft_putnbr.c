#include "libft.h"

void ft_putnbr(int nbr)
{
    if (nbr < 0) {
        ft_putchar('-');
        nbr = -nbr;
    }

    int size = ft_len_nbr(nbr);
    int *digits = (int *) malloc(sizeof(int) * size);

    for (int i = size - 1; i >= 0; i--) {
        digits[i] = nbr % 10;
        nbr /= 10;
    }

    for (int i = 0; i < size; i++) {
        ft_putdigit(digits[i]);
    }

    return;
}