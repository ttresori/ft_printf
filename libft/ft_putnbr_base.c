/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 17:51:44 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/18 18:12:52 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



void	ft_putnbr_base(int nb, char *base)
{
	int 	size_base;
	int		to_print[100];
	int		i;

	size_base = 0;
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	while (base[size_base])
		size_base++;
	while (nb)
	{
		to_print[i] = nb % size_base;
		nb = nb / size_base;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[to_print[i]]);
}
