
#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	int i = 0;
	while (i <= 256)
	{
		if (isprint(i) != ft_isprint(i))
			return (i + 1000);
		i++;
	}
	return (0);
}
