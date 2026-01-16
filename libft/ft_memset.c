/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:33:36 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 14:15:20 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int				i;
	unsigned char				*s1;

	s1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char s[] = "Welcome to Tutorialspoint";
// 	printf("string: %s\n", s);
// 	ft_memset(s, '#', 7);
// 	printf("string: %s\n", s);

// 	char s1[] = "Welcome to Tutorialspoint";
// 	printf("string: %s\n", s1);
// 	memset(s1, '#', 7);
// 	printf("string: %s\n", s1);
// }
