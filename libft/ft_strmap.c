
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dup;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	dup = ft_strdup(s);
	if (!dup)
		return (NULL);
	while (dup[i])
	{
		dup[i] = f(dup[i]);
		i++;
	}
	return (dup);
}
