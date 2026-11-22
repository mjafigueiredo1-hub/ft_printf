/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 16:38:56 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 17:05:24 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthex(unsigned int hex, char c)
{
    int len;
    char *base;

    len = 0;
    if (c == 'x')
        base = "0123456789abcdf";
    else if (c == 'X')
        base = "0123456789ABCDEF";
    if (hex >= 16)
		len += ft_puthex((hex / 16), c);
	len += putchar(base[hex % 16]);
	return (len);
}
