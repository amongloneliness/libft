#include "libft.h"

/*
** Removes and frees the memory of this list's element and all
** its successors using the del and free functions.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if ((*lst)->next != (t_list *) 0)
		ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = (t_list *) 0;
}
