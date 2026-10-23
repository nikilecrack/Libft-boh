
#include <string.h>
#include "../libft.h"
#include <stdlib.h>

int		main(void)
{
	char	a[] = "coucou";
	ft_bzero(a, 3);
	
	char	b[] = "coucou";
	bzero(b, 3);

	return memcmp(a, b, 7);
}
