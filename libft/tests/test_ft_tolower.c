
#include "../libft.h"

int		main(void)
{
	if (ft_tolower('A') != 'a')
		return (10);

	if (ft_tolower('g') != 'g')
		return (20);

	if (ft_tolower('4') != '4')
		return (30);

	if (ft_tolower('\0') != '\0')
		return (40);

	return (0);
}
