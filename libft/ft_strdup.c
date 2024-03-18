/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:08:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/02 07:53:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	if (ft_strlen(s1) <= SIZE_T_MAX)
		len = ft_strlen(s1) + 1;
	else
		return (NULL);
	ptr = ft_calloc(len, sizeof(*s1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, len);
	if (!ptr)
		return (NULL);
	return (ptr);
}
