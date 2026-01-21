/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:14:53 by roblomba          #+#    #+#             */
/*   Updated: 2026/01/19 23:14:56 by roblomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int		len;
	char	c;

	len = 0;
	if (n >= 10)
		len = len + ft_putunbr(n / 10);
	c = (n % 10) + '0';
	len = len + write(1, &c, 1);
	return (len);
}
