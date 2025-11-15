/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:34:06 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 16:42:04 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	temp;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		temp = i;
		while (big[temp] == little[j] && temp < len)
		{
			j++;
			temp++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char big[] = "Hello, World!";
// 	const char little[] = "	";
// 	printf("ft_strnstr: %s\n", ft_strnstr(big, little, 13));
// 	printf("strnstr: %s\n", strnstr(big, little, 13));
// }
