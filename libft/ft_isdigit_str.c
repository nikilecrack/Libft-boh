
#include "libft.h"

t_bool		ft_isdigit_str(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (FALSE);
		i++;
	}
	if (i == 0)
		return (FALSE);
	return (TRUE);
}
