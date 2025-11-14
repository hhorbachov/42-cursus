/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:42:57 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 15:07:30 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <bsd/string.h>

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size <= 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
// 	char dst[100];
// 	const char src[] = "Hello, World!";
// 	ft_strlcpy(dst, src, 10);
// 	printf("ft_strlcpy: %s, Sizeof src: %zu\n", dst, ft_strlcpy(dst, src, 10));
// 	strlcpy(dst, src, 10);
// 	printf("strlcpy: %s, Sizeof src: %zu\n", dst, strlcpy(dst, src, 10));
// }
