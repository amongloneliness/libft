#include "libft.h"

void ft_putstr(char *str)
{
    if (str != (char *) NULL) {
        while (*str != '\0') {
            ft_putchar(*str++);
        }
    }

    return;
}