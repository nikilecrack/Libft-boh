
#include "libft.h"

t_unicode	*ft_unicodedup(const t_unicode *s1)
{
	t_unicode	*s2;
	int			len;

	len = ft_unicodelen(s1) + 1;
	s2 = ft_memalloc((sizeof(*s2) * len));
	ft_intcpy(s2, s1, len);
	return (s2);
}
