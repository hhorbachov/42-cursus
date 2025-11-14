/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:31:33 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/10 15:24:34 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned int	i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}

// int main(void)
// {
// 	unsigned char dest[100];
// 	unsigned char src[] = "Hello, World!";
// 	ft_memmove(dest, src, 0);
// 	printf("ft_memmove: %s\n", dest);
// 	unsigned char dest1[100];
// 	memmove(dest1, src, 0);
// 	printf("memmove: %s\n", dest1);
// }
