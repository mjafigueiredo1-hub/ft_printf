/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 17:22:14 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 19:15:16 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putaddress(uintptr_t ptr)
{
	int		len;
	char	*p_base;

	len = 0;
	p_base = "0123456789abcdef";
	if (ptr >= 16)
		len += ft_putaddress(ptr / 16);
	len += ft_putchar(p_base[ptr % 16]);
	return (len);
}

int	ft_putptr(void *p)
{
	int			len;
	uintptr_t	ptr;

	if (!p)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	ptr = (uintptr_t)p;
	len += ft_putaddress(ptr);
	return (len);
}
