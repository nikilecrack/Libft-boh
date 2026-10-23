
#include <string.h>
#include "../libft.h"
#include <stdlib.h>

int		main(void)
{
	char	a[] = "cou\0cou";
	char	b[7];

	ft_memcpy(a, b, 7);
	return (memcmp(a, b, 7));
}
