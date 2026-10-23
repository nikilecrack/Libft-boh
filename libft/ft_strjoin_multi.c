
#include "libft.h"

char	*ft_strjoin_multi(t_bool autofree, ...)
{
	va_list			ap;
	char			*str;
	char			*strfree_arg;
	char			*strfree;

	va_start(ap, autofree);
	str = NULL;
	while ((strfree_arg = va_arg(ap, char *)))
	{
		strfree = str;
		str = ft_strjoin(str, strfree_arg);
		free(strfree);
		if (autofree)
			free(strfree_arg);
	}
	va_end(ap);
	return (str);
}
