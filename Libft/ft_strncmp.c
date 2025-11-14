/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:48:11 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 16:37:49 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	const char	s1[] = "HellO, WOrld!";
// 	const char	s2[] = "HellO, World!";
// 	printf("s1: '%s', s2: '%s', 
		//ft_strncmp: %d\n", s1, s2, ft_strncmp(s1, s2, 9));
// 	printf("s1: '%s', s2: '%s', strncmp: %d\n", s1, s2, strncmp(s1, s2, 9));
// }
