#include "libft.h"

/*
** Iterates the list lst and applies the f function to
** the contents of each element. Creates a new list as
** a result of successive applications of the f function.
** The del function is used to remove the contents of an element if necessary.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*res_lst;

	if (!lst || !f || !del)
		return ((t_list *) 0);
	res_lst = ft_lstnew(f(lst->content));
	if (!res_lst)
		return ((t_list *) 0);
	while (lst->next != (t_list *) 0)
	{
		new = ft_lstnew(f(lst->next->content));
		if (!new)
		{
			ft_lstclear(&new, del);
			ft_lstclear(&res_lst, del);
		}
		ft_lstadd_back(&res_lst, new);
		lst = lst->next;
	}
	return (res_lst);
}
