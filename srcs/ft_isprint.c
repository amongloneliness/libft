#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126) ? 16384 : 0;
}