/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:29:25 by hhorbach          #+#    #+#             */
/*   Updated: 2025/11/14 17:27:43 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
		}
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (counter);
}

char	**malloc_strings(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		counter;

	i = 0;
	j = 0;
	arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	while (s[i])
	{
		counter = 0;
		if (s[i] == c)
			j++;
		while (s[i] && s[i] == c)
		{
			i++;
		}
		while (s[i] && s[i] != c)
		{
			counter++;
			i++;
		}
		arr[j] = (char *)malloc((counter + 1) * sizeof(char));
	}
	return (arr);
}

char	**add_words(char **arr, const char *s, char c)
{
	int		counter;
	int		i;
	int		j;

	i = 0;
	counter = -1;
	while (s[i] && counter <= count_words(s, c))
	{
		counter++;
		j = 0;
		while (s[i] && s[i] == c)
		{
			i++;
		}
		while (s[i] && s[i] != c && counter <= count_words(s, c))
		{
			arr[counter][j] = s[i];
			j++;
			i++;
		}
		arr[counter][j] = '\0';
	}
	arr[counter + 1] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*cp;

	cp = &c;
	s = ft_strtrim(s, cp);
	arr = malloc_strings(s, c);
	arr = add_words(arr, s, c);
	return (arr);
}

// int main(void)
// {
// 	char const s[] = "^^^1^^2a,^^^^3^^^^--h^^^^";
// 	char **arr;
// 	arr = ft_split(s, '^');
// 	int i = 0;
// 	int j = 0;
// 	while (arr[i] != NULL)
// 	{
// 		j = 0;
// 		while(arr[i][j] != '\0')
// 		{
// 			printf("%c", arr[i][j]);
// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// }
