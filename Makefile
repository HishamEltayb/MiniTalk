# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 08:40:07 by heltayb           #+#    #+#              #
#    Updated: 2024/03/11 10:22:10 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror 
LIBFT = libft/libft.a
LIBFTPRINTF = ft_printf/libftprintf.a

# MANDATORY
NAME = server
CLIENT = client
OBJ_SERVER = server.o
OBJ_CLIENT = client.o

all: $(LIBFT) $(LIBFTPRINTF) $(NAME) $(CLIENT) 

$(NAME): $(OBJ_SERVER) 
	@$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFT) $(LIBFTPRINTF) -o $(NAME)

$(CLIENT): $(OBJ_CLIENT) 
	@$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFT) $(LIBFTPRINTF) -o $(CLIENT)

$(LIBFT): 
	@make -C libft

$(LIBFTPRINTF): 
	@make -C ft_printf

clean:
	@rm -rf $(OBJ_SERVER) $(OBJ_CLIENT)
	@make clean -C libft
	@make clean -C ft_printf

fclean: clean
	@rm -rf $(NAME) $(CLIENT)
	@make fclean -C libft
	@make fclean -C ft_printf

re: fclean all

.PHONY: all clean fclean re LIBFT LIBFTPRINTF