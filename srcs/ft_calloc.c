#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr = (void *) 0;

    if (nmemb == 0 || size == 0)
        nmemb = size = 0;

    ptr = malloc(nmemb * size);

    if (ptr)
        ft_bzero(ptr, nmemb * size);

    return ptr;
}