/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:45:47 by hlib              #+#    #+#             */
/*   Updated: 2026/01/07 16:45:52 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_put_ptr(unsigned long num)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (num >= 16)
		len += ft_put_ptr(num / 16);
	len += ft_print_char(base[num % 16]);
	return (len);
}

int	ft_print_ptr(void *ptr)
{
	unsigned long	addr;

	if (!ptr)
		return (ft_print_str("(nil)"));
	addr = (unsigned long)ptr;
	if (write(1, "0x", 2) == -1)
		return (-1);
	return (2 + ft_put_ptr(addr));
}
