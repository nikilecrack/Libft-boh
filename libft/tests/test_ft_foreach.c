
#include "../libft.h"

void	func(int *i)
{
	*i += 10;
}

int		main(void)
{
	int		test[3] = {4, 10, 120};
	ft_foreach(test, 3,  func);
	if (test[0] != 14)
		return (10);
	if (test[1] != 20)
		return (20);
	if (test[2] != 130)
		return (30);
	return (0);
}
