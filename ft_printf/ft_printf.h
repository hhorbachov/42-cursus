/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlib <hlib@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 18:23:05 by hlib              #+#    #+#             */
/*   Updated: 2026/01/07 16:47:38 by hlib             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *input, ...);
int	ft_print_char(int c);
int	ft_print_hex(unsigned int nbr);
int	ft_print_nbr(int nbr);
int	ft_print_str(char *s);
int	ft_print_unsigned(unsigned int nbr);
int	ft_print_hex_upper(unsigned int nbr);
int	ft_print_ptr(void *ptr);

#endif