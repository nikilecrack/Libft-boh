
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	size_t	len;

	if (!(*little))
		return ((char *)big);
	len = ft_strlen(little);
	while (*big && ft_strncmp(big, little, len) != 0)
	{
		big++;
	}
	if (!*big)
		return (NULL);
	return ((char *)big);
}
