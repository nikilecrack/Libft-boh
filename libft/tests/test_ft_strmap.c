
#include "../libft.h"
#include <ctype.h>

char	change(char c)
{
	return (char)toupper((int)c);
}

int		main(void)
{
	char	str[] = "coucou je suis moi";
	char	*str2 = strdup(str);

	char	cmp[] = "COUCOU JE SUIS MOI";
	char *new = ft_strmap(str, change);

	if (strcmp(str, str2) != 0)
		return (10);
	if (strcmp(cmp, new) != 0)
		return (20);
	return (0);
}

