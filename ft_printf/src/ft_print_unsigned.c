/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:51:18 by hlib              #+#    #+#             */
/*   Updated: 2026/01/07 16:29:33 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr >= 10)
	{
		len += ft_print_unsigned(nbr / 10);
		len += ft_print_unsigned(nbr % 10);
	}
	else
	{
		len += ft_print_char(nbr + '0');
	}
	return (len);
}
