
#include <string.h>
#include "../libft.h"

int		main(void)
{
	char	str[] = "je.cherche 1 truc";

	void	*result = ft_memchr(str, '.', strlen(str));

	if (result != str + 2)
		return (10);
	
	void    *result2 = ft_memchr(str, 'X', strlen(str));
	if (result2 != NULL)
		return (20);

	return (0);
}
