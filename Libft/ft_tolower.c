/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:56:00 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/05 16:57:20 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

// int main(void)
// {
// 	char c = 'A';
// 	printf("ft_tolower: %c\n", ft_tolower(c));
// 	printf("%c\n", c);
// 	c = 'a';
// 	printf("ft_tolower: %c\n", ft_tolower(c));
// 	printf("%c\n", c);
// 	c = 'A';
// 	printf("to_lower: %c\n", tolower(c));
// 	printf("%c\n", c);
// 	c = 'a';
// 	printf("to_lower: %c\n", tolower(c));
// 	printf("%c\n", c);
// }
