# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mscheman <mscheman@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 15:55:04 by mscheman          #+#    #+#              #
#    Updated: 2024/02/17 14:38:00 by mscheman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += --silent

GNL =	get_next_line_bonus.c \
		get_next_line_utils_bonus.c

GNL_OBJ = $(GNL:.c=.o)

NAME = libftgnl.a

%.o:%.c
	clang $(CC_FLAGS) $< -c -o $@

$(NAME): $(GNL_OBJ)
	ar rcs $(NAME) $(GNL_OBJ)

clean:
	rm -f $(GNL_OBJ)

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all