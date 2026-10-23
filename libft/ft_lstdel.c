
#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*lst;
	t_list	*next;

	lst = *alst;
	next = lst;
	while (lst)
	{
		next = lst->next;
		lst->next = NULL;
		ft_lstdelone(&lst, del);
		lst = next;
	}
	*alst = NULL;
}

void	ft_lstdel_content(t_list **alst)
{
	t_list	*lst;
	t_list	*next;

	lst = *alst;
	next = lst;
	while (lst)
	{
		next = lst->next;
		lst->next = NULL;
		ft_lstdelone_content(&lst);
		lst = next;
	}
	*alst = NULL;
}
