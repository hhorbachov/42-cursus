/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 18:12:37 by hlib              #+#    #+#             */
/*   Updated: 2026/01/07 16:46:08 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

static int	ft_print(char c, va_list args)
{
	int	len;

	len = 1;
	if (c == 'c')
		len = ft_print_char(va_arg(args, int));
	else if (c == 'd' || c == 'i')
		len = ft_print_nbr(va_arg(args, int));
	else if (c == 's')
		len = ft_print_str(va_arg(args, char *));
	else if (c == 'u')
		len = ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x')
		len = ft_print_hex(va_arg(args, unsigned int));
	else if (c == 'X')
		len = ft_print_hex_upper(va_arg(args, unsigned int));
	else if (c == 'p')
		len = ft_print_ptr(va_arg(args, void *));
	else if (c == '%')
		write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, input);
	while (input[i] != '\0')
	{
		if (input[i] != '%')
		{
			write(1, &input[i], 1);
			i++;
			len++;
		}
		else if (input[i] == '%')
		{
			len += ft_print(input[i + 1], args);
			i += 2;
		}
	}
	va_end(args);
	return (len);
}
