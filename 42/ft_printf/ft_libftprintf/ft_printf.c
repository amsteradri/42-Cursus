/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:14:34 by adgutier          #+#    #+#             */
/*   Updated: 2022/10/04 12:14:34 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int types(int c, va_list args)
{
    int	i;

	i = 0;
	if (c == 'c')
		i = ft_char(va_arg(args, int));
	else if (c == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		i = ft_void(va_arg(args, void *));
	else if (c == 'i' || c == 'd')
		i = ft_decimal(va_arg(args, int));
	else if (c == 'u')
		i = ft_decimal_unsig(va_arg(args, unsigned long));
	else if (c == 'x')
		i = ft_hexa(va_arg(args, unsigned long));
	else if (c == 'X')
		i = ft_hexamayus(va_arg(args, unsigned long));
	else if (c == '%')
		i = ft_printperccent(c);
	return (i);

}