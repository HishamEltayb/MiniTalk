/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:11:21 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/02 14:55:42 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset1(void *b, size_t len)
{
	int			i;

	i = 0;
	while ((size_t)i < len)
	{
		((char *)b)[i] = '\0';
		i++;
	}
	return (b);
}

//(count > UINT_MAX / size) for handling the overflow
// UINT_MAX is the square root for SIZE_T_MAX
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((count != 0) && (((UINT_MAX / count) < size)))
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memset1(ptr, (count * size));
	return (ptr);
}
