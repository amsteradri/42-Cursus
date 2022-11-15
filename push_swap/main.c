/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:57:02 by adgutier          #+#    #+#             */
/*   Updated: 2022/11/10 13:20:32 by adgutier         ###   ########.fr       */
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


// void leaks(void)
// {
// 	system("leaks -q a.out");
// }

int	main(int argc, char **argv)
{
	situation current;
	//atexit(leaks);
	if(argc < 2)
	{
		ft_putstr("Invalid parameters\n");
		return(0);
	}
	check_only_nums(argc, argv);
	check_only_nums2(argc, argv);
	create_stacks(&current, argc, argv);
	check_dupe(&current.stack_a);
	write_stack(current.stack_a);
	write_stack_b(current.stack_b);

	ft_putchar('\n');
	ft_putstr("---------");
	ft_putstr("\n");
	ft_putstr("a       b");
	
	while(current.stack_a->next)
	{
		free(current.stack_a);
		current.stack_a = current.stack_a->next;
	}
	free(current.stack_a);
	free(current.stack_b);
	// check_leaks();
	return (0);
}