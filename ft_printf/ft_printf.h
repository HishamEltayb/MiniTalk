/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:33:24 by heltayb           #+#    #+#             */
/*   Updated: 2024/03/09 07:50:22 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *string, ...);

size_t	strlen_printf(const char *s);
char	*strchr_printf(const char *s, int c);
void	putnbr_printf(int n, int fd, int *letters);
void	putstr_printf(char *s, int fd, int *letters);
void	putchar_printf(char c, int fd, int *letters);
void	putnbr_base_printf(unsigned long nbr, char *base, int *letters, char c);

#endif