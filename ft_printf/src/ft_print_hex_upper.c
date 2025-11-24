/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:34:00 by hlib              #+#    #+#             */
/*   Updated: 2025/11/23 21:37:31 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_hex(unsigned int nbr)
{
	char	*hexa;
	int		i;
	int		j;
	int		temp;

	hexa = (char *)ft_calloc(ft_strlen(ft_itoa(nbr)), sizeof(char));
	if (!hexa)
		return (0);
	i = 1;
	while (nbr != 0)
	{
		temp = nbr % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexa[i++] = temp;
		nbr /= 16;
	}
	return (ft_print_str(hexa));
}
