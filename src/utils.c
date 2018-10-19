/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 16:16:35 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/19 19:24:03 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int		count_space(const char *str)
{
	int space;
	int start;
	int stop;
	int my_exit;
	const char *tmp;

	space = 0;
	start = 0;
	stop = 0;
	my_exit = 0;
	tmp = str;
	stop = ft_strlen(tmp);
	while (start < stop)
	{
		if (space >= 1 && tmp[start] != ' ')
			return (space);
		if (tmp[start] == ' ' && my_exit == 0)
			space++;
		start++;
	}
	return (space);
}

int		ft_putspace_nb(int space)
{
	while(space > 0)
	{
		ft_putchar(' ');
		space--;
	}
	return (0);
}

void	ft_puthexa(uintptr_t nb, char b) // uintptr_t == *void (in memory)
{
	if (nb >= 16)
	{
		ft_puthexa(nb / 16, b);
		ft_puthexa(nb % 16, b);
	}
	else if (nb < 10)
		ft_putchar(nb + 48);
	else if (b == 0)
		ft_putchar(nb + 87);
	else
		ft_putchar(nb + 55);
}
