
#include <string.h>
#include "../libft.h"

int		main(void)
{
	char	str1[15] = "12345678901234";
	str1[6] = '\0';
	char	str2[5] = "AAA";
	char	attendu[] = "123456AAA01234";
	attendu[9] = '\0';
	ft_strcat(str1, str2);
	return (memcmp(attendu, str1, 14));
}
