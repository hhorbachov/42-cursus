/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:40:53 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/10 15:23:16 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim_is_possible(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_get_size(char const *s1, char const *set)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(s1);
	while (ft_trim_is_possible(s1[size - i - 1], set))
		i++;
	return (size - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*tab;

	i = 0;
	size = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (ft_trim_is_possible(s1[i], set))
		i++;
	if (i == (int)ft_strlen(s1))
		return (ft_strdup(""));
	size = ft_get_size(s1 + i, set) + 1;
	tab = (char *)malloc((size) * sizeof(char));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1 + i, size);
	return (tab);
}

// int	main(void)
// {
// 	char s1[] = "bababbadHello, World!abababab ";
// 	char set[] = "ab d";
// 	char *s2 = ft_strtrim(s1, set);
// 	printf("s1: '%s',\ns2: '%s'\n", s1, s2);
// }
