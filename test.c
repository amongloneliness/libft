#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

int main(void)
{
    size_t len = 10;
    int count = 10;
    char *str = malloc(sizeof(char) * len);
    ft_memset(str, 'x', len * sizeof(char));
    
    while (count--) {
        ft_putstr(str);
        ft_putchar('\n');
    }

    return 0;
}