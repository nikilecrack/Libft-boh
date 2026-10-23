
#include "../libft.h"

int		main(void)
{
	if (ft_strequ("coucoubg", "coucoubg") != 1)
		return (10);
	if (ft_strequ("couco", "coucou") != 0)
		return (20);
	if (ft_strequ("", "") != 1)
		return (30);
}
