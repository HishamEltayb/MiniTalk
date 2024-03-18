/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 10:11:41 by heltayb           #+#    #+#             */
/*   Updated: 2023/12/31 08:13:44 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while ((i < n) && (((i < n) && *ptr1 && *ptr2) || (*ptr1 || *ptr2)))
	{
		if ((*ptr1 - *ptr2) > 0)
			return (1);
		if ((*ptr1 - *ptr2) < 0)
			return (-1);
		ptr1++;
		ptr2++;
		i++;
	}
	return (0);
}
