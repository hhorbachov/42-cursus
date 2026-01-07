/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:39:27 by hlib              #+#    #+#             */
/*   Updated: 2026/01/07 18:48:16 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_nbr(int nbr)
{
	char	*s;
	int		len;
	int		i;

	s = ft_itoa(nbr);
	if (!s)
		return (0);
	len = ft_strlen(s);
	i = 0;
	while (s[i])
	{
		ft_print_char(s[i]);
		i++;
	}
	free(s);
	return (len);
}
