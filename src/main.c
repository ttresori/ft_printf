/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 12:40:56 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/16 15:31:40 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
#include "locale.h"

int		main(void)
{
	setlocale(LC_ALL, "");
	printf("%d\n", 55);
	printf("%s\n", "Hello !");
	printf("%S\n\n", L"HelloSĐ");

	ft_printf("%d\n", 55);
	ft_printf("%s\n", "Hello !");
	ft_printf("%S\n\n", L"ĐelloS !");
	return (0);
}
