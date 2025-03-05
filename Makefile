NAME = push_swap

CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = libft/ft_atol.c \
printf/char_print.c printf/num_print.c printf/utils_print.c printf/ft_printf.c \
moves/move_utils.c moves/push.c moves/reverse.c moves/rotate.c moves/swap.c \
sorter/full_sort.c sorter/prep_a.c sorter/prep_b.c sorter/small_sort.c \
main/ft_lstlast.c main/ft_lstsize.c main/p_split.c main/populate_stack.c main/push_utils.c main/push_swap.c


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
