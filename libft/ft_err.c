#include "libft.h"

t_bool		ft_err(char *str)
{
	ft_putendl_fd(str, STDERR_FILENO);
	exit(0);
}
