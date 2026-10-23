
#include "libft.h"

void		ft_lstrotate(t_list **lst)
{
	t_list	*first;
	t_list	*current;

	first = *lst;
	current = first;
	while (current->next)
		current = current->next;
	*lst = first->next;
	current->next = first;
	first->next = NULL;
}
