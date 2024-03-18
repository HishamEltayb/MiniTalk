/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:16:17 by heltayb           #+#    #+#             */
/*   Updated: 2023/12/30 10:51:54 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//segmentation fault when insert s as NULL as the original function
char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	if (*s == c)
		return ((char *)s);
	ptr = (char *)s;
	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == (char)c)
			return (&ptr[i]);
		i++;
		if ((ptr[i] == '\0') && (ptr[i] == (char)c))
			return (&ptr[i]);
	}
	return (NULL);
}
