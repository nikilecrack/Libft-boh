
#include "../libft.h"

int		main(void)
{
	int	*v = (int *)ft_range(41, 43);

	if (v[0] != 41)
		return (10);
	if (v[1] != 42)
		return (20);
	if (v[1] == 43)
		return (30);
	return (0);
}
