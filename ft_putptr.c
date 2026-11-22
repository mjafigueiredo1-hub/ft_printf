/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 14:59:37 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 17:05:03 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int ft_putaddress(uintptr_t ptr)
{
    int len;
    char *p_base;

    len = 0;
    p_base = "0123456789abcdf";
    if (ptr >= 16)
		len += ft_putadress(ptr / 16);
	len += putchar(p_base[ptr % 16]);
	return (len);
}
int ft_putptr(void *p)
{
    int len;
    uintptr_t ptr;

    if (!p)
		return (ft_putstr("(nil)"));
    len = ft_putstr("0x");  
    ptr = (uintptr_t)p;
    len += ft_putaddress(ptr);
    return (len);
}
