/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 19:53:33 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/19 18:39:55 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
#include <wchar.h>

void		ft_printf_d(va_list ap, const char *str)
{
	int space;

	space = 0;
	ft_putnbr(va_arg(ap, int));
	space = count_space(str);
	space = ft_putspace_nb(space);
}

void		ft_printf_s(va_list ap, const char *str)
{
	int space;

	space = 0;
	ft_putstr(va_arg(ap, char*));
	space = count_space(str);
	space = ft_putspace_nb(space);
}

void		ft_printf_S(va_list ap)
{
	char	*converted;
	wchar_t *src;

	converted = NULL;
	src = va_arg(ap, wchar_t*);
	converted = convert_wchar_char(src);
	ft_putchar(' ');
	ft_putstr(converted);
	ft_strdel(&converted);
}

void		ft_printf_p(va_list ap)
{
	ft_putstr("0x");
	ft_puthexa((va_arg(ap, uintptr_t)), 0);
}
