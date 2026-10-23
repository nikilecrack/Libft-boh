
#include "../libft.h"

int		main(void)
{
	char	str1[] = "coucou";

	if (ft_strchr(str1, 'u') != str1 + 2)
		return (10);
	if (ft_strchr(str1, 'z') != NULL)
		return (20);
	return (0);
}
