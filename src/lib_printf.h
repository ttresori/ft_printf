/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 13:27:49 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/18 21:46:15 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int			ft_printf(const char *str, ...);
int			count_space(const char *str);
int			ft_putspace_nb(int space);
void		print_addr(void *ptr);
void		ft_puthexa(uintptr_t nb, char b);
void		ft_printf_d(va_list ap, const char *str);
void		ft_printf_s(va_list ap, const char *str);
void		ft_printf_S(va_list ap);
void		ft_printf_p(va_list ap);
char		*convert_wchar_char(wchar_t *wchar);

#endif
