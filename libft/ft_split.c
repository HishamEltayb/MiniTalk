/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:03:37 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/05 11:36:27 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	words_count(char const *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] != c)
		{
			while ((((char *)s)[i] != '\0') && (((char *)s)[i] != c))
				i++;
			i--;
			word++;
		}
		i++;
	}
	return (word);
}

char	**one_split(char const *s, char c, int words, char ***split)
{
	t_counter	x;

	x.w = -1;
	x.start = 0;
	while (++x.w < words)
	{
		while (((char *)s)[x.start] && ((char *)s)[x.start] == c)
			x.start++;
		x.end = x.start;
		x.letters = 0;
		while (((char *)s)[++x.end] && ((char *)s)[x.end] != c)
			x.letters++;
		(*split)[x.w] = ft_substr(s, x.start, x.letters + 1);
		if (!(*split)[x.w])
		{
			while (x.w >= 0)
				free((*split)[x.w--]);
			free(*split);
			return (NULL);
		}
		while (((char *)s)[x.start] && ((char *)s)[x.start] != c)
			x.start++;
	}
	(*split)[x.w] = NULL;
	return (*split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;

	if (s == NULL)
		return (NULL);
	words = words_count(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split = one_split(s, c, words, &split);
	return (split);
}
