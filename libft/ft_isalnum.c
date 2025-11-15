/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:09:52 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/05 17:55:55 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

// int	ft_isalpha(int c)
// {
// 	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

// int	ft_isdigit(int c)
// {
// 	if (c >= 48 && c <= 57)
// 	{
// 		return (1);
// 	}
// 	return (0);
// }

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("ft_isalnum: %d\n", ft_isalnum('A'));
// 	printf("ft_isalnum: %d\n", ft_isalnum('a'));
// 	printf("ft_isalnum: %d\n", ft_isalnum('2'));
// 	printf("ft_isalnum: %d\n", ft_isalnum('5'));
// 	printf("ft_isalnum: %d\n", ft_isalnum(']'));
// }
