/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:49:29 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 15:15:23 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*dest1;
	unsigned char	*src1;

	if (!src && !dest)
		return (NULL);
	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	char s1[] = "Hello, World";
// 	char s2[20];
// 	char s3[20];

// 	printf("string s1: %s\n", s1);
// 	ft_memcpy(s2, s1, 5);
// 	printf("string s2: %s\n", s2);
// 	printf("string s1: %s\n", s1);
// 	memcpy(s3, s1, 5);
// 	printf("string s2: %s\n", s3);
// }
