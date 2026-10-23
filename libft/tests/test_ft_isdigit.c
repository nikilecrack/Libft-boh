
#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	int i = -1000;
	while (i <= 2000)
	{
		if (isdigit(i) != ft_isdigit(i))
			return (i + 10000);
		i++;
	}
	return (0);
}
