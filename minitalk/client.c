/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:57:58 by adgutier          #+#    #+#             */
/*   Updated: 2023/02/01 10:57:58 by adgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_message(int pid, char i)
{
	int	n;

	n = 0;
	while (n < 8)
	{
		if ((i & (0x01 << n)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(50);
		n++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			send_message(pid, argv[2][i]);
			i++;
		}
		send_message(pid, '\n');
		ft_printf("\033[33mMessage sended\033[0m\n");
	}
	else
	{
		ft_printf("\033[91mError\033[0m\n");
		return (1);
	}
	return (0);
}
