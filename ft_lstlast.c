#include "push_swap.h"

t_node	*ft_lstlast(t_node *lst)
{
	t_node	*list;

	if (!list)
		return (NULL);
	list = lst;
	while (list->next)
		list = list->next;
	return (list);
}