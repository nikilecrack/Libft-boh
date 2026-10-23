
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	int		bol;

	i = 0;
	bol = 0;
	while (i < len)
	{
		if (src[i] == '\0')
			bol = 1;
		if (bol == 0)
		{
			dst[i] = src[i];
		}
		else
		{
			dst[i] = '\0';
		}
		i++;
	}
	return (dst);
}
