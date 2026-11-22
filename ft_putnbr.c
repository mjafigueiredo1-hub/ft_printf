/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 17:21:44 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 18:19:39 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nr;
	int		len;

	nr = (long)n;
	len = 0;
	if (nr < 0)
	{
		nr = -nr;
		len += ft_putchar('-');
	}
	if (nr >= 10)
		len += ft_putnbr(nr / 10);
	len += ft_putchar((nr % 10) + '0');
	return (len);
}
