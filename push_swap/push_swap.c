/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:51:23 by adgutier          #+#    #+#             */
/*   Updated: 2022/11/10 13:18:59 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 //utilizar formula punto pendiente para proporcion optima de algoritmo al escalar num de casos
void check_dupe(struct stacks **current)
{
    struct stacks *new_node = (struct stacks*)malloc(sizeof(struct stacks));
    struct stacks *aux = NULL;
    
    error((int)new_node);
    new_node = *current;
    while(new_node->next != NULL)
    {
        aux = new_node->next;
        while(aux != NULL)
        {
            if(new_node->n == aux->n)
            {
                ft_putstr("Error\n");
                exit(0);
            }
            aux = aux->next;
        }
        new_node = new_node->next;
    }  
}

static char	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// static int	ft_isdigit(int c)
// {
// 	if (c >= '0' && c <= '9')
// 		return (1);
// 	return (0);
// }


void check_only_nums(int argc, char **argv)
{
    int i;
    
    i = 0;
    while(i < argc)
    {
        if(ft_isalpha(*argv[i]))
        {
            ft_putstr("Error hay letras\n");
            exit(0);
        }
        i++;
    }
}

void check_only_nums2(int argc, char **argv)
{
    int i;
    int j;
    
    i = 1;
    j = 0;
    while (i < argc)
    {
        while (argv[i][j] != '\0')
        {
            if (ft_isalpha(argv[i][j]))
            {
                ft_putstr("Error hay letras\n");
                exit(0);
            }
            j++;
        }
        i++;
    }
}