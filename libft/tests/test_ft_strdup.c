
#include <string.h>
#include "../libft.h"

int		main(void)
{
	char	str1[] = "ceci est là et là est icicicauirteuainretauinrset";

	char	*str2 = ft_strdup(str1);

	return strcmp(str2, str1);
}
