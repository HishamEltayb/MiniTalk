/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 11:39:24 by heltayb           #+#    #+#             */
/*   Updated: 2024/01/04 09:59:17 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//the case for n = 0 we cant handle it 
//0 is unsiged int must cast to size_t
void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	ft_memset(s, '\0', n);
}
