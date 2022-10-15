#include "libft.h"

int ft_len_nbr(int nbr)
{
    if (nbr == 0) {
        return 1;
    } else if (nbr < 0) {
        nbr = -nbr;
    }

    int len = 0;

    while (nbr != 0) {
        len++;
        nbr /= 10;
    }

    return len;
}