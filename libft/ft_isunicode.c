
#include "libft.h"

t_bool		ft_isunicode(t_unicode c)
{
	if (c < 0 || c > 1114111 ||
		(c >= 55296 && c <= 57343))
		return (FALSE);
	return (TRUE);
}
