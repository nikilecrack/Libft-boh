
#include "libft.h"

int					ft_printf(const char *format, ...)
{
	va_list			ap;
	int				r;

	va_start(ap, format);
	r = ft_vprintf(format, ap);
	va_end(ap);
	return (r);
}

t_bool				ft_vprintf_test(const char *restrict str, va_list ap)
{
	int		i;
	char	*tmp;
	t_args	a;

	if (!*str)
		return (TRUE);
	tmp = ft_strchr(str, '%');
	if (tmp == NULL)
		return (TRUE);
	i = tmp - str;
	a = ft_printf_readarg(str + i);
	ft_printf_synonyms(&a);
	if (a.type == 'c' && a.lenght == SIZE_L)
	{
		if (!ft_isunicode(va_arg(ap, t_unicode)))
			return (FALSE);
	}
	else
		va_arg(ap, void*);
	return (ft_vprintf_test(str + i + a.nbr, ap));
}

int					ft_vprintf(const char *restrict str, va_list ap)
{
	va_list original;

	va_copy(original, ap);
	if (str == NULL)
		return (ft_printf_return(-1));
	if (!ft_vprintf_test(str, ap))
		return (ft_printf_return(-1));
	return (ft_vprintf_tested(str, original));
}

int					ft_vprintf_tested(const char *restrict str, va_list ap)
{
	int				i;
	char			*tmp;
	t_args			a;
	int				printed;

	i = 0;
	tmp = ft_strchr(str, '%');
	if (tmp == NULL)
	{
		ft_putstr(str);
		return (ft_printf_return((int)ft_strlen(str)));
	}
	i = tmp - str;
	write(1, str, i);
	a = ft_printf_readarg(str + i);
	ft_printf_synonyms(&a);
	if (ft_printf_execarg(&a, ap) == 0)
		return (i);
	printed = i + a.tmp;
	i += a.nbr;
	if (a.err == 1)
		return (ft_printf_return(-1));
	return (ft_printf_return(ft_vprintf(str + i, ap) + printed));
}
