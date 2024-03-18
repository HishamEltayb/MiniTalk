/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 10:09:02 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/02 14:57:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*one_string(const char *s);
static char	*two_string(const char *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (one_string(s2));
	else if (s2 == NULL)
		return (one_string(s1));
	return (two_string(s1, s2));
}

static char	*two_string(const char *s1, char const *s2)
{
	char	*join;
	int		count;
	int		i;

	join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join == NULL)
		return (NULL);
	i = 0;
	count = 0;
	while (s1[i])
		join[count++] = s1[i++];
	i = 0;
	while (s2[i])
		join[count++] = s2[i++];
	join[count] = '\0';
	return (join);
}

static char	*one_string(const char *s)
{
	char	*join;
	int		i;

	join = malloc(ft_strlen(s) + 1);
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		join[i] = s[i];
		i++;
	}
	join[i] = '\0';
	return (join);
}
