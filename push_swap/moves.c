/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:12:10 by adgutier          #+#    #+#             */
/*   Updated: 2022/11/10 11:58:09 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//-----------------------------------------RA AND RB-----------------------------------------//
void rra(struct stacks **current)
{
    //esta wea nos pone ultimo primero
	struct stacks *new_node = (struct stacks*)malloc(sizeof(struct stacks));
    struct stacks *secLast = NULL;

    error((int)new_node);
    
    new_node->next = *current;
    while(new_node->next != NULL)
    {
        secLast = new_node;
        new_node = new_node->next;
    }
    secLast->next = NULL;
    new_node->next = *current;
    *current = new_node;
}

void ra(struct stacks **current)
{
    struct stacks *new_node = (struct stacks*)malloc(sizeof(struct stacks));
    struct stacks* last;

    error((int)new_node);
    new_node = *current;
    last = *current;
    while (last->next != NULL) 
        last = last->next;
    *current = new_node->next;
    new_node->next = NULL;
    last->next = new_node;
}

void rr(struct stacks **current_a, struct stacks **current_b)
{
    struct stacks *new_node_a = (struct stacks*)malloc(sizeof(struct stacks));
    struct stacks *new_node_b = (struct stacks*)malloc(sizeof(struct stacks));
    
    error((int)new_node_a);
    error((int)new_node_b);
    struct stacks* last;
    struct stacks* last2;
    
    new_node_a = *current_a;
    new_node_b = *current_b;
    last = *current_a;
    last2 = *current_b;
    while (last->next != NULL && last2->next != NULL)
    {
        last = last->next;
        last2 = last2->next;
    }
    *current_a = new_node_a->next;
    *current_b = new_node_b->next;
    new_node_a->next = NULL;
    new_node_b->next = NULL;
    last->next = new_node_a;
    last2->next = new_node_b;
}
//-----------------------------------------SA AND SB-----------------------------------------//
void swap(int   *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sa(struct stacks **current)
{
    struct stacks *new_node = (struct stacks*)malloc(sizeof(struct stacks));
    
    error((int)new_node);
    new_node = *current;
    swap(&new_node->n, &new_node->next->n);
    *current = new_node;
}

void ft_ss(struct stacks **stack_a, struct stacks **stack_b)
{
    struct stacks *new_node_a = (struct stacks*)malloc(sizeof(struct stacks));
	struct stacks *new_node_b = (struct stacks*)malloc(sizeof(struct stacks));
    
    error((int)new_node_a);
    error((int)new_node_b);
    new_node_a = *stack_a;
	new_node_b = *stack_b;
    swap(&new_node_a->n, &new_node_a->next->n);
	swap(&new_node_b->n, &new_node_b->next->n);
    *stack_a = new_node_a;
	*stack_b = new_node_b;
}
//-----------------------------------------PUSH A AND B--------------------------------------//

void push_b(struct stacks **current_a, struct stacks **current_b)
{
    struct stacks *new_node_a = (struct stacks*)malloc(sizeof(struct stacks));
	struct stacks *new_node_b = (struct stacks*)malloc(sizeof(struct stacks));
    
    error((int)new_node_a);
    error((int)new_node_b);
	new_node_a = *current_a;
	new_node_b->next = *current_b;
	new_node_b->n = new_node_a->n;
	new_node_a = new_node_a->next;
	*current_a = new_node_a;
	*current_b = new_node_b;
	
}


void push_a(struct stacks **current_a, struct stacks **current_b)
{
    struct stacks *new_node_a = (struct stacks*)malloc(sizeof(struct stacks));
	struct stacks *new_node_b = (struct stacks*)malloc(sizeof(struct stacks));
    
	error((int)new_node_a);
    error((int)new_node_b);
	new_node_b = *current_b;
	
	new_node_a->n = new_node_b->n;
	new_node_a->next = *current_a;
	*current_a = new_node_a;
	new_node_b = new_node_b->next;
	
	*current_b = new_node_b;
}
//-------------------------------------------------------------------------------------------//