/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:57:02 by adgutier          #+#    #+#             */
/*   Updated: 2022/11/07 17:11:49 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + 48);
}

int	main(int argc, char **argv)
{
	situation current;
	
	if(argc == 1)
		return(0);
	create_stacks(&current, argc, argv);
	push_b(&current.stack_a, &current.stack_b);
	push_b(&current.stack_a, &current.stack_b);
	push_b(&current.stack_a, &current.stack_b);
	rr(&current.stack_a, &current.stack_b);

	write_stack(current.stack_a);
	write_stack_b(current.stack_b);

	ft_putchar('\n');
	ft_putstr("---------");
	ft_putstr("\n");
	ft_putstr("a       b");
	return (0);
}