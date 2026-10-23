
#include "../libft.h"

int		main(void)
{
	if (ft_strcmp("aaaa", "b") >= 0)
		return (10);
	if (ft_strcmp("bbbbb", "a") <= 0)
		return (20);
	if (ft_strcmp("aaa", "aaa") != 0)
		return (30);
	return (0);
}
