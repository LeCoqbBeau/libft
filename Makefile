# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mscheman <mathieu.petru@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:21:30 by mscheman          #+#    #+#              #
#    Updated: 2023/12/14 05:13:55 by mscheman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT =	LIBFT/ft_isdigit.c \
		LIBFT/ft_strchr.c \
		LIBFT/ft_memchr.c \
		LIBFT/ft_isalnum.c \
		LIBFT/ft_strtrim.c \
		LIBFT/ft_striteri.c \
		LIBFT/ft_putnbr_fd.c \
		LIBFT/ft_calloc.c \
		LIBFT/ft_strmapi.c \
		LIBFT/ft_substr.c \
		LIBFT/ft_isspace.c \
		LIBFT/ft_isprint.c \
		LIBFT/ft_strdup.c \
		LIBFT/ft_itoa.c \
		LIBFT/ft_memcpy.c \
		LIBFT/ft_strnstr.c \
		LIBFT/ft_tolower.c \
		LIBFT/ft_isalpha.c \
		LIBFT/ft_strlcpy.c \
		LIBFT/ft_putendl_fd.c \
		LIBFT/ft_strlen.c \
		LIBFT/ft_atoi.c \
		LIBFT/ft_memset.c \
		LIBFT/ft_memcmp.c \
		LIBFT/ft_putstr_fd.c \
		LIBFT/ft_isascii.c \
		LIBFT/ft_strjoin.c \
		LIBFT/ft_strncmp.c \
		LIBFT/ft_putchar_fd.c \
		LIBFT/ft_strrchr.c \
		LIBFT/ft_split.c \
		LIBFT/ft_memmove.c \
		LIBFT/ft_bzero.c \
		LIBFT/ft_strlcat.c \
		LIBFT/ft_toupper.c \

LIST =	LIST/ft_lstdelone_bonus.c \
		LIST/ft_lstnew_bonus.c \
		LIST/ft_lstiter_bonus.c \
		LIST/ft_lstadd_back_bonus.c \
		LIST/ft_lstclear_bonus.c \
		LIST/ft_lstlast_bonus.c \
		LIST/ft_lstadd_front_bonus.c \
		LIST/ft_lstmap_bonus.c \
		LIST/ft_lstsize_bonus.c \

LIST_OBJ = $(LIST:.c=.o)

LIBFT_OBJ = $(LIBFT:.c=.o)

PRINTF_LIB = PRINTF/libftprintf.a

NAME = libft.a

COMPIL_FLAGS += -Wall -Wextra -Werror -c

%.o:%.c
	cc $(CC_FLAGS) $< -c -o $@

$(NAME): $(LIBFT_OBJ)
	ar rcs $(NAME) $(LIBFT_OBJ)

clean:
	rm -f $(LIBFT_OBJ)
	rm -f $(LIST_OBJ)
	make clean -C ./PRINTF

fclean: clean
	rm -f $(NAME)

all: $(NAME)

re: fclean all

list: $(LIST_OBJ)
	ar rcs $(NAME) $(LIST_OBJ)

print: $(NAME)
	make -C ./PRINTF
	mv $(PRINTF_LIB) $(NAME)

full: print list $(LIBFT_OBJ)
	ar rcs $(NAME) $(LIBFT_OBJ)

.SILENT: print, list