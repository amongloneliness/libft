#include "libft.h"

/*
** Iterates the list lst and applies the f function to the contents of each element.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != (t_list *) 0)
	{
		f(lst->content);
		lst = lst->next;
	}
}
