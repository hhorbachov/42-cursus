/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:24:00 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/05 17:55:49 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isprint: %d\n", ft_isprint('0'));
// 	printf("ft_isprint: %d\n", ft_isprint('9'));
// 	printf("ft_isprint: %d\n", ft_isprint('2'));
// }
