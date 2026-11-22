/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-alme <mde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/22 16:38:56 by mde-alme          #+#    #+#             */
/*   Updated: 2026/11/22 16:51:03 by mde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_puthex(unsigned int hex, char c)
{
    int len;
    char *base;

    len = 0;
    if (c == 'x')
        base = "0123456789abcdf";
    else if (c == 'X')
        base = "0123456789ABCDEF";
    if (hex >= 16)
		len += ft_puthex((hex / 16), c);
	len += write(1, &base[hex % 16], 1);
	return (len);
}
