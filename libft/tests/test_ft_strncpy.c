
#include <string.h>
#include "../libft.h"

int		main(void)
{
	char	source[] = "012345";
	char	*destination = malloc(sizeof(char) * 11);
	char	*attendu = malloc(sizeof(char) * 11);

	memset(attendu, 'Z', 11);
	memset(destination, 'Z', 11);
	
	strncpy(attendu, source, 8);
	ft_strncpy(destination, source, 8);

	return (memcmp(destination, attendu, 11));
}
