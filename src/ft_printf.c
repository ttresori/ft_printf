/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 13:30:27 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/16 15:31:21 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
#include <wchar.h>

int		ft_printf(const char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	while (*str)
	{
		if (*str == 'd')
		{
			ft_putnbr(va_arg(ap, int));
		}
		if (*str == 's')
		{
			ft_putstr(va_arg(ap, char*));
		}
		if (*str == 'S')
		{
			putwchar(*(va_arg(ap, wchar_t*)));
		}
		if (*str == '\n')
			ft_putchar('\n');
		str++;
	}
	va_end(ap);
	return (0);
}
