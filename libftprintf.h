/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:06:19 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 16:58:23 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int ft_print_arg (char c, va_list arg);
int ft_printf(const char *format, ...);
int ft_putchar(int c);
int ft_puthex(unsigned int hex, char c);
int ft_putnbr(int n);
int ft_putptr(void *p);
int ft_putstr(char *str);
int ft_putunsigned(unsigned int nr);

#endif