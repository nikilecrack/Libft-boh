
#include "../libft.h"

int		main(void)
{
	char	str[] = "je mange des patates";

	if (ft_strnstr(str, "mange", 10) != str + 3)
		return (10);

	if (ft_strstr(str, "respect") != NULL)
		return (20);
	
	if (ft_strstr(str, "") != str)
		return (30);
	
	if (ft_strnstr(str, "mange", 7) != NULL)
		return (40);

	if (ft_strnstr(str, "mange", 8) != str + 3)
		return (50);

	return (0);
}
