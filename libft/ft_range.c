
#include "libft.h"

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = ft_memalloc(sizeof(int) * (max - min));
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
