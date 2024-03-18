/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:55:32 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/05 11:37:34 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(t_str *x, size_t len, const char *needle)
{
	x->check = 0;
	x->temp = x->str;
	x->t = x->i;
	while (*(x->ptr))
	{
		if (((*(x->ptr) == *(x->temp)) && x->t < len))
		{
			x->check++;
			if (x->check == ft_strlen(needle))
				return (1);
			x->ptr++;
			x->temp++;
			x->t++;
		}
		else
			break ;
	}
	x->ptr = (char *)needle;
	return (0);
}

//segmentation fault in haystck & needle = NULL is not handled
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	t_str	x;

	x.str = (char *)haystack;
	x.ptr = (char *)needle;
	x.i = 0;
	if (len < ft_strlen(needle) && x.str)
		return (NULL);
	if (*needle == '\0' || len == 0)
		return (x.str);
	if (*(x.str) == '\0')
		return (NULL);
	while (*(x.str) && x.i < len)
	{
		if (*(x.str) == *(x.ptr))
			if (check(&x, len, needle))
				return (x.str);
		x.str++;
		x.i++;
	}
	return (NULL);
}
