/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 09:50:28 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/03 08:43:07 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*node;

	if (lst == NULL || del == NULL || (*lst) == NULL)
		return ;
	node = *lst;
	while (node != NULL)
	{
		temp = node->next;
		ft_lstdelone(node, del);
		node = temp;
	}
	*lst = NULL;
}
