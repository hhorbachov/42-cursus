/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:59:44 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/05 17:55:50 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isalpha: %d\n", ft_isalpha('A'));
// 	printf("ft_isalpha: %d\n", ft_isalpha('a'));
// 	printf("ft_isalpha: %d\n", ft_isalpha('2'));
// }
