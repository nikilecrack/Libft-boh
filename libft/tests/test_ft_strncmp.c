
#include "../libft.h"

int		main(void)
{
	if (ft_strncmp("aaaa", "b", 10) >= 0)
		return (10);
	if (ft_strncmp("bbbbb", "a", 10) <= 0)
		return (20);
	if (ft_strncmp("aaa", "aab", 2) != 0)
		return (30);
	return (0);
}
