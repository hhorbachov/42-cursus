/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:54:12 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/07 17:57:55 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dupl;
	int		i;

	dupl = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	while (s[i] != '\0')
	{
		dupl[i] = s[i];
		i++;
	}
	dupl[i] = '\0';
	return (dupl);
}

// int main(void)
// {
// 	char *s = ft_strdup("Hello ");
// 	printf("%s\n", s);
// 	char *s1 = strdup("Hello ");
// 	printf("%s\n", s1);
// 	free(s1);
// }
