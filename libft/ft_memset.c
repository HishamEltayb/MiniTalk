/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:26:19 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/02 07:47:48 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// to handle the over flow we should use long in c
// we can't handle the case of len = 0.
// 0 is signed iteger we need to cast to size_t
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i;

	ch = (unsigned char)c;
	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}
