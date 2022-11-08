/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:51:20 by adgutier          #+#    #+#             */
/*   Updated: 2022/11/07 17:11:38 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdbool.h>

typedef struct stacks
{
    int n;
    struct stacks *next;
}stacks;

typedef struct moves
{
    char *posi;
    void *next;
    void *befo;
}moves;

typedef struct situation
{
    stacks  *stack_a;
    stacks  *stack_b;
    stacks	*final_a;
    stacks	*final_b;
    moves   *movements;
    moves   *prev_move;
    
}situation;

typedef struct solving
{
    stacks  *stack_a;
    stacks  *stack_b;
    moves   *movement;
}solving;

char	*ft_get_args(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
int	    ft_atoi(const char *str);
void	create_stacks(situation *situ, int argc, char **argv);
void    rra(struct stacks **current);
void    ra(struct stacks **current);
void rr(struct stacks **current_a, struct stacks **current_b);
void	write_stack(stacks *stack);
void	write_stack_b(stacks *stack);
void	ft_putnbr(int nb);
void	error(int err);
void    ft_sa(struct stacks **current);
void 	ft_ss(struct stacks **stack_a, struct stacks **stack_b);
void    ft_secondpos(struct stacks *current);
void	push_a(struct stacks **current_a, struct stacks **current_b);
void	push_b(struct stacks **current_a, struct stacks **current_b);
#endif