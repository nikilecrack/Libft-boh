
#include "../libft.h"

int		main(void)
{
	char	str[] = "	   coucou   	";
	char	cmp[] = "coucou";

	char	*new = ft_strtrim(str);
	if (strcmp(cmp, new) != 0)
		return (10);

	if ( new >= str && new <= str + strlen(str))
		return (20);
	
	return (0);
}
