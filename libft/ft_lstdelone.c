
#include "libft.h"

void	ft_lstdelone(t_list **link, void (*del)(void *, size_t))
{
	del((*link)->content, (*link)->content_size);
	free(*link);
	*link = NULL;
}

void	ft_lstdelone_content(t_list **link)
{
	free((*link)->content);
	free(*link);
	*link = NULL;
}
