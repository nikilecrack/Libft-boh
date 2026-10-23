
#include "libft.h"

t_bool		ft_isunicode_str(t_unicode *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (TRUE);
	while (str[i] != 0)
	{
		if (!ft_isunicode(str[i]))
		{
			return (FALSE);
		}
		i++;
	}
	return (TRUE);
}
