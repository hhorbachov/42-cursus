/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 19:49:30 by hlib              #+#    #+#             */
/*   Updated: 2025/11/13 13:44:34 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	test(unsigned int i, char *cp)
// {
// 	char	c;
// 	c = 'A';
// 	printf("test:\nIndex: %d, Character: %c\n", i, *cp);
// 	*cp = c;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int main(void)
// {
// 	char s[] = "Hello, World!";
// 	ft_striteri(s, test);
// 	printf("String after function f: %s\n", s);
// }
