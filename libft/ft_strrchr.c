
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	l = NULL;
	while (*s)
	{
		if (*s == (char)c)
			l = (char *)s;
		s++;
	}
	if (!*s && c == '\0')
		l = (char *)s;
	return (l);
}
