
#include "../libft.h"

int		main(void)
{
	char	a[] = "";
	char	b[] = "0123456789";
	char	c[] = "oo\0xx";

	if (ft_strlen(a) != 0)
		return (10);

	if (ft_strlen(b) != 10)
		return (20);

	if (ft_strlen(c) != 2)
		return (30);

	return (0);
}
