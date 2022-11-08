/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:02:59 by adgutier          #+#    #+#             */
/*   Updated: 2022/11/07 11:42:44 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//creamos stacks y comprobamos con funcion error
void	create_stacks(situation *situ, int argc, char **argv)
{
	int		i;
	stacks	*current;

	situ->movements = NULL;
	situ->stack_b = NULL;
    current = (stacks*)malloc(sizeof(stacks));
	error((int)(current = (stacks*)malloc(sizeof(stacks))));
	situ->stack_a = current;
	i = 0;
	error(!(i >= argc - 1));
	while (++i < argc)
	{
		current->n = ft_atoi(argv[i]);
		current->next = NULL;
		if (i + 1 < argc)
		{
            current->next = (stacks*)malloc(sizeof(stacks));
			error((int)(current->next = (stacks*)malloc(sizeof(stacks))));
			current = current->next;
		}
	}
	situ->final_a = current;
}

// comprobamos el resultado del malloc para determinar si hay error
void	error(int err)
{
	if (err == 0 || err == -1)
	{
		ft_putstr("Te has cagado encima\n");
	}
	return ;
}

//escribimos stacks con putnbr pues en create_stacks ya hemos convertido el array a num con atoi
void	write_stack(stacks *stack)
{
	stacks	*current;

	current = stack;
    
	while (current != NULL)
	{
		ft_putnbr(current->n);
		current->next != NULL ? ft_putstr("\n") : 0;
		current = current->next;
	}
	ft_putstr("\n");
}

void	write_stack_b(stacks *stack)
{
	stacks	*current;

	current = stack;
    
	while (current != NULL)
	{
		ft_putstr("        ");
		ft_putnbr(current->n);
		current->next != NULL ? ft_putstr("\n") : 0;
		current = current->next;
	}
}




