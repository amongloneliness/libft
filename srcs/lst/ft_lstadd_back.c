#include "libft.h"

/*
** Adds the new element to the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	ft_lstlast(*lst)->next = new;
}
