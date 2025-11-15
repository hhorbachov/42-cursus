/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:35:57 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 14:17:13 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = 0;
		i++;
	}
}

// int main(void)
// {
// 	char s[] = "Hello, World!";
// 	char s1[] = "Hello, World!";

// 	char *sp = &s[3];
// 	char *s1p = &s1[3];

// 	printf("string: %s\n", s);
// 	ft_bzero(sp, 3);
// 	printf("string: %s\n", s);
// 	printf("string1: %s\n", s1);
// 	bzero(s1p, 3);
// 	printf("string1: %s\n", s1);
// }
