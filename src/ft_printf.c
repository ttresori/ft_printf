/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 13:30:27 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/18 17:17:58 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
#include <wchar.h>

int		ft_printf(const char *str, ...)
{
	va_list ap;
	int space;
	
	va_start(ap, str);
	space = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'd')
			{
				ft_putnbr(va_arg(ap, int));
				space = count_space(str);
				space = ft_putspace_nb(space);
			}
			if (*str == 's')
			{
				ft_putstr(va_arg(ap, char*));
				space = count_space(str);
				space = ft_putspace_nb(space);
			}
			if (*str == 'S')
			{
				putwchar(*(va_arg(ap, wchar_t*)));
			}
			if (*str == 'p')
				print_hexa(&str);
			if (*str == '\n')
				ft_putchar('\n');
		}
		str++;
	}
	va_end(ap);
	return (0);
}
