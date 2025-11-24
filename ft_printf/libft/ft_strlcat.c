/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:18:03 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/05 16:41:41 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dst_len;

	dst_len = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dst_len >= size)
	{
		dst_len = size;
		return (dst_len + ft_strlen(src));
	}
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j < size - dst_len - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}

// int main(void)
// {
// 	char	dst[] = "Hello,";
// 	const char src[] = " World!";
// 	printf("ft_strlcat: %s, Sizeof src: %zu\n", dst, ft_strlcat(dst, src, 13));
// 	printf("After ft_strlcat: %s\n", dst);
// 	char	dst1[] = "Hello,";
// 	printf("strlcat: %s, Sizeof src: %zu\n", dst1, strlcat(dst1, src, 13));
// 	printf("After strlcat: %s\n", dst1);
// }
