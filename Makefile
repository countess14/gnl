NAME = gnl.out
SRC = get_next_line.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra -c $(SRC)
clean:
	/bin/rm -rf $(OBJ)
fclean: clean
	/bin/rm -rf $(NAME)
re: fclean all
