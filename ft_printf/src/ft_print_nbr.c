/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:39:27 by hlib              #+#    #+#             */
/*   Updated: 2026/01/07 15:56:54 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_nbr(int nbr)
{
	char	*s;
	int		len;

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
