/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 18:12:37 by hlib              #+#    #+#             */
/*   Updated: 2025/11/23 21:40:23 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print(char c, va_list args)
{
	int	len;

	len = 1;
	if (c == 'c')
		ft_print_char(va_arg(args, char));
	else if (c == 'd' || c == 'i')
		ft_print_nbr(va_arg(args, int));
	else if (c == 's')
		ft_print_str(va_arg(args, char *));
	else if (c == 'u')
		ft_print_str(va_arg(args, unsigned int));
	else if (c == 'x')
		ft_print_hex(va_arg(args, unsigned int));
	else if (c == 'X')
		ft_print_hex_upper(va_arg(args, unsigned int));
	else if (c == '%')
		write(1, '%', 1);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(input);
	va_start(args, input);
	while (input[i] != '\0')
	{
		if (input[i] != '%')
			write(1, &input[i], 1);
		else if (input[i] == '%')
		{
			ft_print(input[i + 1], args);
			i++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

