/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 09:34:58 by heltayb           #+#    #+#             */
/*   Updated: 2024/03/09 07:52:44 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putstr_printf(char *s, int fd, int *letters)
{
	int	i;

	if (s == NULL)
	{
		*letters += write(1, "(null)", 6);
		return ;
	}
	i = 0;
	while (s[i])
	{
		putchar_printf(s[i], fd, letters);
		i++;
	}
}
