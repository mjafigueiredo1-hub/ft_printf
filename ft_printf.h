/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 17:06:43 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 18:24:41 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_print_arg(char c, va_list arg);
int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_puthex(unsigned int hex, char c);
int	ft_putnbr(int n);
int	ft_putptr(void *p);
int	ft_putstr(char *str);
int	ft_putunsigned(unsigned int nr);

#endif