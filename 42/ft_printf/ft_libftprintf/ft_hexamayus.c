/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexamayus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:45:12 by adgutier          #+#    #+#             */
/*   Updated: 2022/10/04 11:45:12 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_hexamayus(unsigned int nb) 
{
	char	*str;
	int		i;

	i = ft_negative(nb);
	str = ft_itoa_base(nb, "0123456789ABCDEF");
	i = ft_putstr(str);
	free(str);
	return(i);
}
