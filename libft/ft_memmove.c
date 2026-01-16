/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:31:33 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/15 03:18:02 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (n == 0)
		return (dest);
	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
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
