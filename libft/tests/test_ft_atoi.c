
#include "../libft.h"

int		main(void)
{
	if (ft_atoi("10") != 10)
		return (10);

	if (ft_atoi("-10") != -10)
		return (20);

	if (ft_atoi("-2147483648") != -2147483648)
		return (30);

	if (ft_atoi("2147483647") != 2147483647)
		return (40);

	if (ft_atoi("coucouprout") != 0)
		return (50);

	if (ft_atoi("42coucouprout") != 42)
		return (60);

	if (ft_atoi("co55ucouprout") != 0)
		return (70);

	if (ft_atoi("      42lol") != 42)
		return (80);

	if (ft_atoi("") != 0)
		return (90);
	return (0);
}
