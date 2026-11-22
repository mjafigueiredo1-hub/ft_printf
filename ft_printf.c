/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 18:57:27 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/21 21:35:17 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *format, ...)
{
    int value_to_return;
    int arg_count;
    int str_i;
    int arg_i;

    arg_count = ft_count_args(format);
    if (arg_count == 0)
    {
        ft_putstr_fd((char *)format, 1);
        return (ft_strlen(format));
    }
    str_i = 0;
    arg_i = 0;
    va_list args;
    va_start(args, format);
    while (arg_i < arg_count && format[str_i])
    {
        if(format[str_i] != '%')
        {
            ft_putchar_fd(format[str_i], 1);
            str_i++
        }
        if(format[str_i] == '%')
        {
            ft_print_arg (format[str_i++], args);
            i++;
        }
        arg_i++;
    }
    /*va_arg(args, type) returns the next element 
    after the defined one of that type and then goes 
    pointing to the next element in the list*/
    va_end(args);
}
