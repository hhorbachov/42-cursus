/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:22:23 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/15 13:27:45 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s = (char *) malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!s)
		return (NULL);
	while (s1[i] != '\0')
	{
		s[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s[j] = s2[i];
		j++;
		i++;
	}
	s[j] = '\0';
	return (s);
}

// int	main(void)
// {
// 	char *s = ft_strjoin("Hello, ", "World");
// 	printf("String: %s\n", s);
// }
