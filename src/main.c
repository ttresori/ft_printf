/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 12:40:56 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/18 17:18:53 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
#include "locale.h"

int		main(void)
{
	char a = 42;

	setlocale(LC_ALL, "");
	printf("%s   %s  %d %p\n", "Hello!", "HELLO", 42, &a);
	ft_printf("%s   %s  %d %p\n", "Hello!", "HELLO", 42, &a);
	return (0);
}
