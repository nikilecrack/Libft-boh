
#include "../libft.h"

int		main(void)
{
	char		*str;
	size_t	i = 42;
	size_t 	y = 0;

	str = ft_memalloc(i);
	while (y < i)
	{
		if (*(str + y) != '\0')
		{
			return (10 + y);
		}
		y++;
	}
	return (0);
}
