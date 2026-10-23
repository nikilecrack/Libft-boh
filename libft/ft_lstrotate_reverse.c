
#include "libft.h"

void		ft_lstrotate_reverse(t_list **lst)
{
	t_list	*first;
	t_list	*current;
	t_list	*before_last;

	first = *lst;
	current = first;
	while (current->next)
	{
		before_last = current;
		current = current->next;
	}
	current->next = first;
	*lst = current;
	before_last->next = NULL;
}
