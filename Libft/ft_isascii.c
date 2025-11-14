/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:17:16 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/05 17:55:57 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isascii: %d\n", ft_isascii('A'));
// 	printf("ft_isascii: %d\n", ft_isascii('0'));
// 	printf("ft_isascii: %d\n", ft_isascii(']'));
// }
