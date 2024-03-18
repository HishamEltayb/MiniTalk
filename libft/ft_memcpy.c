/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 10:25:00 by heltayb           #+#    #+#             */
/*   Updated: 2023/12/30 19:29:01 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// we shouldn't handel overlap in memcpy in this function.
// we shouldn't handel overflow in memcpy in this function.
// restrict is forbidden to use.
// segmntation falut when NULL src
// garbeg value might be in the memory
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*dest;
	size_t	i;

	if (src == NULL && dst == NULL)
		return (NULL);
	source = (char *)src;
	dest = (char *)dst;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
