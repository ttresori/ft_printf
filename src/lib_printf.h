/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 13:27:49 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/18 17:12:12 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int			ft_printf(const char *str, ...);
int			count_space(const char *str);
int			ft_putspace_nb(int space);
void		print_hexa(void *ptr);
#endif
