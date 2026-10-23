
#include <string.h>
#include "../libft.h"
#include <stdlib.h>

int		main(void)
{
	
	char	a[] = "abcdef";

	ft_memmove(a, a + 2, 5);
	return (strcmp(a, "cdef"));
}
