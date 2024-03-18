/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:18:47 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/02 14:55:31 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	checking(int *i, const char *str, int *sign)
{
	while (str[*i] && ((str[*i] >= 9 && str[*i] <= 13) || str[*i] == ' '))
		(*i)++;
	if (str[*i] && (str[*i] == '+' || str[*i] == '-'))
	{
		if (str[*i] == '-')
			*sign = -1;
		(*i)++;
	}
	while (str[*i] == '0')
		(*i)++;
}

int	ft_atoi(const char *str)
{
	int				i;
	int				sign;
	int				digit;
	unsigned long	num;

	i = 0;
	digit = 0;
	sign = 1;
	num = 0;
	checking(&i, str, &sign);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
		digit++;
		if (((num > LONG_MAX) && (sign > 0))
			|| (((digit > 19) && (sign > 0))))
			return (-1);
		else if ((num > (LONG_MAX) && (sign < 0))
			|| (((digit > 19) && (sign < 0))))
			return (0);
	}
	return (num * sign);
}
