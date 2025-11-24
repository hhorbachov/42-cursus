/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:55:11 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/18 00:21:19 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sign_calc(const char nptr)
{
	int	sign;

	sign = 1;
	if (nptr == '-')
	{
		sign = -1;
	}
	else if (nptr == '+')
	{
		sign = 1;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	long	i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		sign = sign_calc(nptr[i]);
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		num = num * 10 + (nptr[i] - 48);
		i++;
	}
	return (num * sign);
}

// int main(void)
// {
// 	const char nptr[] = "  		  	 2147483647ws";
// 	printf("ft_atoi: %d\n", ft_atoi(nptr));
// 	printf("atoi: %d\n", atoi(nptr));
// }
