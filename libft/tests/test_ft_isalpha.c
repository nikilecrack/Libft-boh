

#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	int i = -1000;
	while (i <= 2000)
	{
		if (isalpha(i) != ft_isalpha(i))
			return (i + 100000);
		i++;
	}
	return (0);
}
