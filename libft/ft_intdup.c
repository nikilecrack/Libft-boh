
#include "libft.h"

int		*ft_intdup(int nbr)
{
	int *ptr;

	ptr = ft_memalloc(sizeof(int));
	*(ptr) = nbr;
	return (ptr);
}
