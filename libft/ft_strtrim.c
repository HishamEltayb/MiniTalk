/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:17:03 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/02 14:58:01 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	size;
	int	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	size = ft_strlen(s1) - 1;
	i = 0;
	while (chek(s1[i], set))
		i++;
	if (i == (size + 1))
		return (ft_strdup(""));
	while (chek(s1[size], set))
		size--;
	return (ft_substr(s1, (unsigned int)i, ((size + 1) - i)));
}
