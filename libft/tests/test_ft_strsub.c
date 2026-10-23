
#include "../libft.h"
#include <stdio.h>

int		main(void)
{
	char	str[] = "coucou je mange";
	char	cmp[] = "je";
	char	*new = ft_strsub(str, 7, 2);
	if (strcmp(cmp, new) != 0)
		return (10);
	return (0);
}
