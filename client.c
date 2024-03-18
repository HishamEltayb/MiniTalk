/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 08:39:30 by heltayb           #+#    #+#             */
/*   Updated: 2024/03/11 13:21:27 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

pid_t	g_pid;

static void	error_pid(void);
static void	error_argument(void);
static void	string_to_binary(char *str);
static void	check_pid(char *str);

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		check_pid(av[1]);
		g_pid = (pid_t)ft_atoi(av[1]);
		if (g_pid <= 0)
			error_pid();
		string_to_binary(av[2]);
	}
	else
		error_argument();
	return (0);
}

void	string_to_binary(char *str)
{
	int		i;
	int		index;
	int		pid_check;
	char	bit;

	i = 0;
	while (str[i])
	{
		index = 7;
		while (index >= 0)
		{
			bit = (str[i] >> index) & 1;
			if (bit == 1)
				pid_check = kill(g_pid, SIGUSR1);
			else
				pid_check = kill (g_pid, SIGUSR2);
			if (pid_check == -1)
				error_pid();
			index--;
			usleep(500);
		}
		i++;
	}
}

static void	check_pid(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			error_pid();
		i++;
	}
}

static void	error_pid(void)
{
	write(2, "\033[31mERROR\nWRONG PID ! 💔\033[0m\n", 33);
	exit(1);
}

static void	error_argument(void)
{
	write(2, "\033[31mERROR\nMUST BE 3 ARGUMENTS 💔\033[0m\n", 41);
	exit(1);
}
