#include "libft.h"

/*
** Frees memory of the contents of a list element using the del
** function given as a parameter and frees the element. The memory
** of the next element of the list should not be freed.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
