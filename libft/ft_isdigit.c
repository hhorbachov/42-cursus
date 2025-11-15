/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:06:05 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/05 17:55:56 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isdigit: %d\n", ft_isdigit('0'));
// 	printf("ft_isdigit: %d\n", ft_isdigit('9'));
// 	printf("ft_isdigit: %d\n", ft_isdigit('2'));
// }
