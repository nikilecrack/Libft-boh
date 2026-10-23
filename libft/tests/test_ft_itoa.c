
#include "../libft.h"

int		main(void)
{
	if (strcmp(ft_itoa(10), "10") != 0)
		return (10);

	if (strcmp(ft_itoa(-10), "-10") != 0)
		return (20);

	if (strcmp(ft_itoa(-2147483648), "-2147483648") != 0)
		return (30);

	if (strcmp(ft_itoa(2147483647), "2147483647") != 0)
		return (40);

	if (strcmp(ft_itoa(0), "0")  != 0)
		return (50);

	return (0);
}
