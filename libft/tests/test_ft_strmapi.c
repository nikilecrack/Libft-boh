
#include "../libft.h"
#include <ctype.h>

char	change(unsigned int i, char c)
{
	(void)c;
	return '0'+i;
}

int		main(void)
{
	char	str[] = "abcde";
	char	*str2 = strdup(str);

	char	cmp[] = "01234";
	char *new = ft_strmapi(str, change);
	
	if (strcmp(str, str2) != 0)
		return (10);
	if (strcmp(cmp, new) != 0)
		return (20);
	return (0);
}

