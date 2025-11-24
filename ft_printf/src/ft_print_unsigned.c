/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:51:18 by hlib              #+#    #+#             */
/*   Updated: 2025/11/23 21:04:25 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int		len;
	char	*s;

	if (nbr < 0)
		return (0);
	s = ft_itoa(nbr);
	if (!s)
		return (0);
	len = ft_strlen(s);
	while (*s)
	{
		ft_print_char(*s);
		s++;
	}
	return (len);
}
