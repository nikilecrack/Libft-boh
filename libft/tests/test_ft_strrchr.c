
#include "../libft.h"

int		main(void)
{
	char	str[] = "coucou";

	if (ft_strrchr(str, 'o') != str + 4)
		return (10);

	if (ft_strrchr(str, 'O') != NULL)
		return (20);
	return (0);
}
