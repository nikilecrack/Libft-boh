
#include "../libft.h"

int		main(void)
{
	char	str[] = "naaa naaaan je ne veux pas mourir ! :'(";
	void	*test = strdup(str);
	ft_memdel(&test);
	return (0);
}
