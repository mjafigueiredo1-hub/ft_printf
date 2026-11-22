/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:57:27 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 17:04:58 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    int value_to_return;
    int i;
    va_list args;

    i = 0;
    value_to_return = 0;
    va_start(args, format);
    while (format[i])
    {
        if(format[i] = '%')
            value_to_return += ft_print_arg (format[i++], args);
        else
            value_to_return += ft_putchar(format[i]);
        i++;
    }
    va_end(args);
    return (value_to_return);
}
