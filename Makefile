NAME = push_swap

CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = libft/ft_atol.c \
printf/char_print.c printf/num_print.c printf/utils_print.c printf/ft_printf.c \
push_swap.c push_utils.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
