
#include "../libft.h"

int		main(void)
{
	char	str[] = "coucou je fais bien et toi ?";
	int		max = strlen(str);
	int		i = 0;

	ft_strclr(str);
	while (i < max)
	{
		if (str[i] != '\0')
			return (10);
		i++;
	}
	return (0);
}
