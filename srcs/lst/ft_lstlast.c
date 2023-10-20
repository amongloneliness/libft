#include "libft.h"

/*
** Returns the last element of the list.
*/
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == (t_list *) 0)
		return ((t_list *) 0);
	while (lst->next != (t_list *) 0)
		lst = lst->next;
	return (lst);
}
