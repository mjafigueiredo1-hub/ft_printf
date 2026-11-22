/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 17:23:04 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 18:19:56 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nr)
{
	int	len;

	len = 0;
	if (nr >= 10)
		len += ft_putunsigned(nr / 10);
	len += ft_putchar((nr % 10) + '0');
	return (len);
}
