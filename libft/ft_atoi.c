#include "libft.h"
#include <stdio.h>

int			ft_atoi(const char *str)
{
	int		result;
	int		n;
	int		i;
	i = 0;
	n = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v' \
			|| str[i] == ' ' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		n = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	result = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) - (str[i] - '0');
		i++;
	}
	if (n)
		return (result);
	else
		return (0 - result);
}
