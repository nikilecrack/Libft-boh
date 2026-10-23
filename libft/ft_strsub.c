
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, (void*)(s + start), len);
	return (str);
}
