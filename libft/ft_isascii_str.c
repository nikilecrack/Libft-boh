
#include "libft.h"

t_bool		ft_isascii_str(unsigned char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (TRUE);
	while (str[i])
	{
		if (!ft_isascii(str[i]))
			return (FALSE);
		i++;
	}
	return (TRUE);
}
