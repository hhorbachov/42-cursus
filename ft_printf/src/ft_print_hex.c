/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:05:34 by hlib              #+#    #+#             */
/*   Updated: 2026/01/07 16:21:26 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hex(unsigned int nbr)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (nbr >= 16)
	{
		len += ft_print_hex(nbr / 16);
		len += ft_print_hex(nbr % 16);
	}
	else
	{
		len += ft_print_char(base[nbr]);
	}
	return (len);
}
