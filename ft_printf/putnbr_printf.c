/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 09:47:56 by heltayb           #+#    #+#             */
/*   Updated: 2024/03/09 07:52:08 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	print_number(int n, int fd, int *letters)
{
	size_t	l;
	size_t	c;

	l = 1;
	while (l <= (size_t)n)
		l *= 10;
	l /= 10;
	while (l > 0)
	{
		c = ((size_t)n / l);
		c = (c % 10) + '0';
		*letters += write(fd, &c, 1);
		l /= 10;
	}
}

void	putnbr_printf(int n, int fd, int *letters)
{
	if (n == 0)
		*letters += write(fd, "0", 1);
	else if (n == -2147483648)
		*letters += write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		*letters += write(fd, "-", 1);
		print_number(-n, fd, letters);
	}
	else
		print_number(n, fd, letters);
}
