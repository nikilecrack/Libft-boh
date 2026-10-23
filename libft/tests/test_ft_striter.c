
#include "../libft.h"

void	add_one(char *c)
{
	(*c)++;
}

int		main(void)
{
	char	str[] = "abcd";
	char	cmp[] = "bcde";

	ft_striter(str, add_one);
	if (strcmp(str, cmp) != 0)
	{
		return (10);
	}
	return (0);
}
