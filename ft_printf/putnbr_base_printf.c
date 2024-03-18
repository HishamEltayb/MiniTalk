/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_base_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:55:42 by heltayb           #+#    #+#             */
/*   Updated: 2024/03/09 07:55:20 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putnbr_base_printf(unsigned long nbr, char *base, int *letters, char c)
{
	unsigned long	x;
	unsigned long	size;

	if (c++ == 'p')
		*letters += write(1, "0x", 2);
	size = strlen_printf(base);
	x = nbr;
	if (x >= size)
		putnbr_base_printf(x / size, base, letters, c);
	putnbr_printf(base[x % size], 1, letters);
}
