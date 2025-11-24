/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhorbach <hhorbach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:24:55 by hlib              #+#    #+#             */
/*   Updated: 2025/11/14 17:08:42 by hhorbach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <limits.h>

static int	count_digits(long n)
{
	int	counter;

	counter = 0;
	if (n <= 0)
	{
		counter++;
	}
	while (n != 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

static char	*fill_string(int n)
{
	long	num;
	char	*s;
	int		i;

	num = n;
	i = 0;
	s = (char *)malloc((count_digits(num) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
		num = -num;
	if (n == 0)
		s[i++] = '0';
	while (num > 0)
	{
		s[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		s[i++] = '-';
	s[i] = '\0';
	return (s);
}

static void	reverse_string(char *s)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = ft_strlen(s);
	while (s[i] != '\0' && i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*s;

	s = fill_string(n);
	if (!s)
		return (NULL);
	reverse_string(s);
	return (s);
}

// int	main(void)
// {

// 	char *res = ft_itoa(-9);
// 	while (*res != '\0')
// 	{
// 		printf("\n%c", *res);
// 		res++;
// 	}
// 	// printf("\n%s", res);
// }
