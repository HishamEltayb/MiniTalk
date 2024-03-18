# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 20:22:02 by heltayb           #+#    #+#              #
#    Updated: 2024/03/09 10:36:09 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

OBJ  = ft_printf.o putchar_printf.o putnbr_base_printf.o putstr_printf.o \
		strchr_printf.o strlen_printf.o putnbr_printf.o
	
all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
