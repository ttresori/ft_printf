/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 13:30:27 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/18 20:03:53 by ttresori         ###   ########.fr       */
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
			if (*str == 'd')
				ft_printf_d(ap, str);
			if (*str == 's')
				ft_printf_s(ap, str);
			if (*str == 'S')
				ft_printf_S(ap);
			if (*str == 'p')
				ft_printf_p(ap);
			if (*str == '\n')
				ft_putchar('\n');
		}
		str++;
	}
	va_end(ap);
	return (0);
}
