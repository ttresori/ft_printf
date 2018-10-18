/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wchar_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 21:17:52 by ttresori          #+#    #+#             */
/*   Updated: 2018/10/18 21:46:53 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

size_t	wstrlen(wchar_t *wstring)
{
	size_t len;

	len = 0;
	if (!(wstring))
		return (0);
	while (*(wstring++))
		len++;
	return (len);
}

int		wcharlen(wchar_t wchar)
{
	if (wchar <= 0x7f)
		return (1);
	else if (wchar <= 0x7ff)
		return (2);
	else if (wchar <= 0x7ffff)
		return (3);
	else
		return (4);
}

size_t	wbytelen(wchar_t *wstring)
{
	size_t len;
	size_t bytelen;

	if (!(len = wstrlen(wstring)))
		return (0);
	bytelen = 0;
	while (len > 0)
	{
		bytelen += wcharlen(*wstring);
		wstring++;
		len--;
	}
	return (bytelen);
}

int		putwchar_char(wchar_t wchar, char *dest, int i)
{
	int		size;

	size = wcharlen(wchar);
	if (size == 1)
		dest[i++] = wchar;
	else if (size == 2)
	{
		dest[i++] = (wchar >> 6) + 0xc0; // 6 sur la droite, ajout de 11000000
		dest[i++] = (wchar & 0x3F) + 0x80; // filtre par 111111, ajout de 10000000
	}
	else if (size == 3)
	{
		dest[i++] = (wchar >> 12) + 0xE0;
		dest[i++] = ((wchar >> 6) & 0x3F) + 0x80;
		dest[i++] = (wchar & 0x3F) + 0x80;
	}
	else 
	{
		dest[i++] = (wchar >> 18) + 0xf0;
		dest[i++] = ((wchar >> 12) & 0x3F) +0x80;
		dest[i++] = ((wchar >> 6) & 0x3F) + 0x80;
		dest[i++] = (wchar & 0x3F) + 0x80;
	}
	return (i);
}

char    *convert_wchar_char(wchar_t *wchar)
{
    char    *dest;
    int    i;
    int    k;
    int    len;

    if (!(wchar))
		return (NULL);
    i = 0;
    k = 0;
	dest = NULL;
	len = wbytelen(wchar);
	if (!(dest = (char*)malloc(sizeof(char) * len)))
		return (NULL);
	dest[len] = '\0';
	while (wchar[k])
	{
		i = putwchar_char(wchar[k], dest, i); // avancement  gauche a droite
		k++;
	}
	return (dest);
}
