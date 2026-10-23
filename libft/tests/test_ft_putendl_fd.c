
#include "../libft.h"

int		main(void)
{
	int     p[2];
	char    sortie[100];

	pipe(p);

	ft_putendl_fd("coucoupouet", p[1]);
	sortie[read(p[0], sortie, 100)] = '\0';
	if (0 != strcmp(sortie, "coucoupouet\n"))
		return (10);

	return (0);
}
