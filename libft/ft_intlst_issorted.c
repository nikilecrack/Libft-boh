
#include "libft.h"

t_bool	ft_intlst_issorted(t_list *lst)
{
	int p;

	p = *((int*)lst->content);
	while (lst)
	{
		if (p > *((int*)lst->content))
			return (FALSE);
		p = *((int*)lst->content);
		lst = lst->next;
	}
	return (TRUE);
}
