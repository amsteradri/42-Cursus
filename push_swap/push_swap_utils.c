/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:02:59 by adgutier          #+#    #+#             */
/*   Updated: 2022/11/10 13:03:44 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	create_stacks(situation *situ, int argc, char **argv)
{
	int		i;
	stacks	*current;

	situ->movements = NULL;
	situ->stack_b = NULL;
    current = (stacks*)malloc(sizeof(stacks));
	error((int)(current));
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
			error((int)(current->next));
			current = current->next;
		}
	}
	situ->final_a = current;
	free(current);
}


void	error(int err)
{
	if (err == 0 || err == -1)
	{
		ft_putstr("Error\n");
	}
	return ;
}

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




