/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 12:40:56 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/19 19:14:11 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"
#include "locale.h"

int		main(void)
{
	char a = 'i';

	setlocale(LC_ALL, "");
	printf("%s   %s  %d %p %S %D\n", "Hello!", "HELLO", 42, &a, L"❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ €", 21);
	ft_printf("%s   %s  %d %p %S %D\n", "Hello!", "HELLO", 42, &a, L"❤ ☀ ☆ ☂ ☻ ♞ ☯ ☭ ☢ €", 21);
	return (0);
}
