SRCS = ft_printf.c ft_printf_utils.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC_FLAGS = -Wall -Werror -Wextra

%.o:%.c
	clang $(CC_FLAGS) $< -c -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
all: $(NAME)

re: fclean all
