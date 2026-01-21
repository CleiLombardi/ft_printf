/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:14:38 by roblomba          #+#    #+#             */
/*   Updated: 2026/01/19 23:14:40 by roblomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int			len;
	long int	nb;
	char		c;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		len = len + write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		len = len + ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	len = len + write (1, &c, 1);
	return (len);
}
