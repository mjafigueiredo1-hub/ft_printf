/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 16:32:21 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 17:05:07 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putunsigned(unsigned int nr)
(
    len = 0;
    if (nr >= 10)
        len += ft_putunsigned(nr / 10);
	len += putchar((nr % 10) + '0');
	return (len);
)