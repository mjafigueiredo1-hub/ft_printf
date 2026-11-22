/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 16:19:50 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 17:05:01 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putnbr(int n)
{
    long nr;
    int len;

    nr = (long)n;
    len = 0;
    if (nr < 0)
    {
        nr = -nr;
        len += putchar('-'); 
    }
    if (nr >= 10)
        len += ft_putnbr(nr / 10);
	len += putchar((nr % 10) + '0');
	return (len);
}
