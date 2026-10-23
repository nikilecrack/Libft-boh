
#include "../libft.h"

int		main(void)
{
	if (ft_toupper('g') != 'G')
		return (10);

	if (ft_toupper('Z') != 'Z')
		return (20);

	if (ft_toupper('9') != '9')
		return (30);

	if (ft_toupper('\0') != '\0')
		return (40);

	return (0);
}
