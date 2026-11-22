/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 17:16:04 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 18:57:57 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		return_val;
	int		i;
	va_list	args;

	if (!format)
		return (-1);
	i = 0;
	return_val = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			return_val += ft_print_arg(format[++i], args);
		else
			return_val += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (return_val);
}
