/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:42:20 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/05 16:57:19 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// int main(void)
// {
// 	char c = 'A';
// 	printf("to_upper: %c\n", ft_toupper(c));
// 	printf("%c\n", c);
// 	c = 'a';
// 	printf("to_upper: %c\n", ft_toupper(c));
// 	printf("%c\n", c);
// 	c = 'A';
// 	printf("to_upper: %c\n", toupper(c));
// 	printf("%c\n", c);
// 	c = 'a';
// 	printf("to_upper: %c\n", toupper(c));
// 	printf("%c\n", c);
// }
