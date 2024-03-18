/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:32:42 by heltayb           #+#    #+#             */
/*   Updated: 2023/12/31 07:16:20 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	destination_length;
	size_t	source_length;

	if (src != NULL && dstsize == 0)
		return (ft_strlen(src));
	source_length = ft_strlen(src);
	destination_length = ft_strlen(dst);
	if (destination_length > dstsize)
		return (dstsize + source_length);
	ft_strlcpy(dst + destination_length, src, dstsize - destination_length);
	return (destination_length + source_length);
}
