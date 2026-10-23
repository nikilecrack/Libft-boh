
#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	d;
	size_t	f;

	if (!s)
		return (NULL);
	d = 0;
	while (s[d] == ' ' || s[d] == '\t' || s[d] == '\n')
		d++;
	if (s[d] == '\0')
		return (ft_strnew(0));
	f = ft_strlen(s) - 1;
	while (s[f] == ' ' || s[f] == '\t' || s[f] == '\n')
		f--;
	return (ft_strsub(s, d, f - d + 1));
}

char		*ft_strtrim_free(char **str)
{
	char	*tmp;

	tmp = ft_strtrim(*str);
	ft_memdel((void**)str);
	return (tmp);
}
