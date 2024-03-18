/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:16:46 by heltayb           #+#    #+#             */
/*   Updated: 2023/12/30 21:05:17 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// we have garbeg value we can't handle it
// we can't handle the overflow 
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (len == 0 && dst != NULL)
		return ((void *)(dst));
	if (dst > (void *)(src))
	{
		len--;
		while (len > 0)
		{
			((char *)dst)[len] = ((char *)src)[len];
			len--;
		}
		((char *)dst)[len] = ((char *)src)[len];
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
