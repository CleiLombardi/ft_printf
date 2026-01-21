/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:16:02 by roblomba          #+#    #+#             */
/*   Updated: 2026/01/19 23:16:04 by roblomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_options(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = len + ft_putchar(va_arg(args, int));
	else if (format == 'p')
		len = len + ft_putptr(va_arg(args, void *));
	else if (format == 's')
		len = len + ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		len = len + ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		len = len + ft_putunbr(va_arg(args, unsigned int));
	else if (format == 'x')
		len = len + ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		len = len + ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		len = len + write(1, "%", 1);
	else
	{
		len = len + write(1, "%", 1);
		len = len + write(1, &format, 1);
	}
	return (len);
}
