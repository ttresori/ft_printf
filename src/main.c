/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 12:40:56 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/18 20:53:26 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
#include "locale.h"

int		main(void)
{
	char a = 'i';

	setlocale(LC_ALL, "");
	printf("%s   %s  %d %p %S\n", "Hello!", "HELLO", 42, &a, L"\u048E");
	ft_printf("%s   %s  %d %p %S\n", "Hello!", "HELLO", 42, &a, L"\u048E");
	return (0);
}
