
#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	int i = -1000;
	while (i <= 2000)
	{
		if (isalnum(i) != ft_isalnum(i))
			return (i);
		i++;
	}
	return (0);
}
