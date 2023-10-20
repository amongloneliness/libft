#include "libft.h"

/*
** Returns the list's size.
*/
int	ft_lstsize(t_list *lst)
{
	int	sz;

	sz = 0;
	while (lst != (t_list *) 0)
	{
		lst = lst->next;
		sz++;
	}
	return (sz);
}
