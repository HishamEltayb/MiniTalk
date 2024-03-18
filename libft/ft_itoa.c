/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:22:03 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/02 18:53:57 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*min(void)
{
	char	*r;
	char	*s;
	char	*ptr;

	s = "-2147483648";
	ptr = malloc(12);
	if (ptr == NULL)
		return (NULL);
	r = ptr;
	while (*s)
		*ptr++ = *s++;
	*ptr = '\0';
	ptr = r;
	return (ptr);
}

static char	*zero(void)
{
	char	*ptr;

	ptr = malloc(2);
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

static char	*negative(char *str)
{
	char	*ptr;
	int		len;
	int		i;

	len = (ft_strlen(str) + 1);
	ptr = malloc((len) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	ptr[i] = '-';
	i++;
	len -= 2;
	while (len >= 0)
	{
		ptr[i] = str[len];
		len--;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	*positive(char	*str)
{
	char	*ptr;
	int		len;
	int		i;

	len = (ft_strlen(str));
	ptr = malloc((len) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	len--;
	while (len >= 0)
	{
		ptr[i] = str[len];
		len--;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	int		i;
	char	str[20];
	int		temp;
	int		num;

	if (n == 0)
		return (zero());
	if (n == -2147483648)
		return (min());
	num = n;
	if (n < 0)
		num = -n;
	i = 0;
	temp = 1;
	while (num > 0)
	{
		temp = num % 10;
		str[i] = temp + '0';
		num = num / 10;
		i++;
	}
	str[i] = '\0';
	if (n < 0)
		return (negative(str));
	return (positive(str));
}
