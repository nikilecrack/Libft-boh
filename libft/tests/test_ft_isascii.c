
#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	int i = -1000;
	while (i <= 2000)
	{
		if (isascii(i) != ft_isascii(i))
			return (i + 100000);
		i++;
	}
	return (0);
}
