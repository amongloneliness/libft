#include "libft.h"

int ft_atoi(const char *nptr)
{
    return (int) strtol (nptr,  (char **)NULL, 10);
}