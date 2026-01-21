/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:15:23 by roblomba          #+#    #+#             */
/*   Updated: 2026/01/19 23:15:27 by roblomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, const char *base)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 16)
	{
		len = len + ft_puthex(n / 16, base);
	}
	c = base [n % 16];
	len = len + write (1, &c, 1);
	return (len);
}
