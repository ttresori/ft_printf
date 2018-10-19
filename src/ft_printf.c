/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 13:30:27 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/19 19:36:31 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

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
			if (*str == 'd' || *str == 'D')
				ft_printf_d(ap);
			if (*str == 's')
				ft_printf_s(ap);
			if (*str == 'S')
				ft_printf_S(ap);
			if (*str == 'p')
				ft_printf_p(ap);
			if (*str == '\n')
				ft_putchar('\n');
		}
		if (*str == ' ')
			ft_putchar(' ');
		str++;
	}
	va_end(ap);
	return (0);
}
