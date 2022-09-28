/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:32:11 by adgutier          #+#    #+#             */
/*   Updated: 2022/09/28 12:34:44 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	frees(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int	countwords(const char *str, char charset)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0') == 1
			&& (str[i] == charset || str[i] == '\0') == 0)
			counter++;
		i++;
	}
	return (counter);
}


char	**ft_split(const char *s, char c)
{
	char	**newstring;
	int		words;

	if(!s || !c)
		return(NULL);
	words = countwords(s, c);
	newstring = (char **)malloc(sizeof(char *) * (words + 1));
	if (newstring == NULL)
		return (NULL);
	newstring[words] = 0;
	
	
	return (newstring);
}


int		main(void)
{
	int i = 0;
	char **tab;
		
	tab = ft_split("me cago en to q no tira", ' ' );
	while (i < 7)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
}