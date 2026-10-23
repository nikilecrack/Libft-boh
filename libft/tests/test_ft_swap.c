
#include "../libft.h"

int		main(void)
{
	int	a = 42;
	int	b = 500;
	ft_swap(&a, &b);
	if (a != 500)
		return (10);
	if (b != 42)
		return (20);
}
