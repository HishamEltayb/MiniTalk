/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:05:08 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/03 13:27:47 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*sub_st(char *sub, const char *s, unsigned int start, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	count;

	if (s == NULL || len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	count = 0;
	i = start;
	while (s[i] && count < len)
	{
		i++;
		count++;
	}
	if (start == ft_strlen(s))
		count = 0;
	sub = malloc(count + 1);
	if (sub == NULL)
		return (NULL);
	return (sub_st(sub, s, start, count));
}
