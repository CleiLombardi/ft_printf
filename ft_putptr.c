/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblomba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 23:15:43 by roblomba          #+#    #+#             */
/*   Updated: 2026/01/19 23:15:47 by roblomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	len = len + write(1, "0x", 2);
	len = len + ft_puthex((unsigned long)ptr, "0123456789abcdef");
	return (len);
}
