#include "libft.h"

/*
** Returns a new list element.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *) malloc(sizeof(t_list));
	lst->content = content;
	lst->next = (t_list *) 0;
	return (lst);
}
