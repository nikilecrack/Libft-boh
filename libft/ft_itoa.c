
#include "libft.h"

char			*ft_itoa(int n)
{
	char		*str;
	int			len;

	len = ft_intlen(n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (n < 0)
		str[0] = '-';
	else
		n = 0 - n;
	while (n / 10)
	{
		str[--len] = (0 - (n % 10)) + '0';
		n /= 10;
	}
	str[--len] = (0 - (n % 10)) + '0';
	return (str);
}
