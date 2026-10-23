#include "libft.h"

void	ft_cat(char *path)
{
	int		fd;
	int		l;
	void	*buf[255];

	fd = open(path, O_RDONLY);
	if (fd > -1)
	{
		while ((l = read(fd, buf, 255)) > 0)
		{
			write(1, buf, l);
		}
	}
	close(fd);
}
