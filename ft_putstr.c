/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 14:24:28 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 17:05:06 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putstr(char *str)
{
    int i;

    if (!str)
        return(ft_putstr("(null)"));
    i = 0;
    while (str[i])
    {
        putchar(str[i]);
        i++;
    }
    return (i);
}