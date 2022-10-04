/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:51:12 by adgutier          #+#    #+#             */
/*   Updated: 2022/10/03 12:51:12 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i = i + ft_putchar_fd(str[i], 1);
	return(i);
}

