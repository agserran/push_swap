NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS =		bubble.c 	\
			choose.c 	\
			lists.c 	\
			main.c 		\
			moves_a.c 	\
			moves_b.c 	\
			nums.c 		\
			push_swap.c \
			sort.c 		\
			utils.c 	\
			utils2.c 	\


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re