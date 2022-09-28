/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:27:02 by adgutier          #+#    #+#             */
/*   Updated: 2022/09/27 16:54:56 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	londest;
	unsigned int	lonsrc;

	lonsrc = ft_strlen(src);
	if (!dest && !size)
		return (lonsrc);
	i = ft_strlen(dest);
	j = 0;
	londest = ft_strlen(dest);
	if (size < 1)
		return (lonsrc + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < londest)
		return (lonsrc + size);
	else
		return (londest + lonsrc);
}

/*int main(void)
{
	const char src1[10]	= "ab";
	char dest1[10]   = "123";

	char src[10]	= "ab";
	char dest[10]	= "123";

	int 	nb = 2;
	unsigned int 	nb2 = 2;
	

	//printf("Str: %u", ft_strlcat(dest, src, nb2));
	char b[0xF] = "nyan !";

	printf("%lu --->real strlcat\n",strlcat(((void *)0), b, 0));
	printf("%lu --->my strlcat\n",ft_strlcat(((void *)0), b, 0));
	return (0);
}*/
