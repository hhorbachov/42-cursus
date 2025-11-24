/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:58:44 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/15 13:26:38 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*temp;

	temp = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			temp = &s[i];
		i++;
	}
	if ((unsigned char)s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	return ((char *)temp);
}

// int main(void)
// {
// 	const char str[] = "Hello, cWorlcd";
// 	printf("ft_strchr: %s\n", ft_strrchr(str, 'o'));
// 	printf("ft_strchr: %s\n", strrchr(str, 'o'));
// }
