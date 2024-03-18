# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 12:15:00 by heltayb           #+#    #+#              #
#    Updated: 2024/01/04 12:15:05 by heltayb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
AR = ar -scr
CFLAGS = -Wall -Wextra -Werror

OBJECT = 	ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_memmove.o ft_isascii.o ft_isprint.o ft_strlen.o \
			ft_memset.o ft_bzero.o ft_memcpy.o ft_strlcpy.o ft_strlcat.o \
			ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o \
			ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o \
			ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o \
			ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o 

BONUS_OBJECT = 	ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o \
				ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstmap.o ft_lstiter.o

all: $(NAME)

$(NAME): $(OBJECT)
	@$(AR) $(NAME) $(OBJECT)

bonus:  $(BONUS_OBJECT)
	@$(AR) $(NAME) $(BONUS_OBJECT)

clean:
	@rm -f $(OBJECT) $(BONUS_OBJECT)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
