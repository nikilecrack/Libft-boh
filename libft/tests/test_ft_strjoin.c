
#include "../libft.h"

int		main(void)
{
	char	str1[] = "coucou je suis ";
	char	str2[] = "un string";
	char	cmp[] = "coucou je suis un string";

	char	*new = ft_strjoin(str1, str2);
	if (strcmp(cmp, new) != 0)
		return (10);
	return (0);
}
