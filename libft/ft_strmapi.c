
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dup;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	dup = ft_strdup(s);
	if (dup == NULL)
		return (NULL);
	while (dup[i])
	{
		dup[i] = f(i, dup[i]);
		i++;
	}
	return (dup);
}
