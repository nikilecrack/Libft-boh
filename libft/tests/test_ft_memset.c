
#include <string.h>
#include "../libft.h"
#include <stdlib.h>

int		main(void)
{
	char	a[] = "coucou";

	ft_memset(a, 42, 3);
	return strcmp(a, "***cou");
}
