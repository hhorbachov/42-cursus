/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:06:19 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 16:30:09 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*sp;

	sp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sp[i] == (unsigned char)c)
			return ((void *)&sp[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char s[] = "Hello, World!";
// 	char *s1;
// 	s1 = ft_memchr(s, '/', 14);
// 	printf("ft_memchr: %s\n", s1);
// 	s1 = memchr(s, '/', 14);
// 	printf("memchr: %s\n", s1);
// }
