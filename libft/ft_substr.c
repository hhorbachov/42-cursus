/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:06:32 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/15 13:51:40 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_make_empty_str(void)
{
	char	*str;

	str = malloc(1);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	size_t			length;
	size_t			true_length;

	i = 0;
	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start >= length)
		return (ft_make_empty_str());
	if (len > length - start)
		true_length = length - start;
	else
		true_length = len;
	substr = malloc(true_length + 1);
	if (!(substr))
		return (NULL);
	while (i < true_length)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
// 	char *str = ft_substr("abcdef", 2, 3);
// 	printf("String: %s\n", str);
// }
