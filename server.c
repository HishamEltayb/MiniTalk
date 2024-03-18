/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 08:39:37 by heltayb           #+#    #+#             */
/*   Updated: 2024/03/11 13:14:58 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	binary_to_string(int signal);

int	main(void)
{
	ft_printf("\033[32mPID = (%d)\033[0m\n", getpid());
	signal(SIGUSR1, binary_to_string);
	signal(SIGUSR2, binary_to_string);
	while (1)
		pause();
}

void	binary_to_string(int signal)
{
	static char	character;
	static int	index;

	character = character << 1;
	if (signal == SIGUSR1)
		character = character | 1;
	if (signal == SIGUSR2)
		character = character | 0;
	index++;
	if (index == 8)
	{
		index = 0;
		write(1, &character, 1);
		character = 0;
	}
}
