NAME = libft.a
SRC = ft_strsplit.c ft_putstr.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_isdigit.c ft_itoa.c ft_memmove.c ft_memset.c ft_strjoin.c ft_strlcat.c ft_strtrim.c ft_putstr.c ft_putchar.c ft_strlen.c ft_atoi.c ft_isascii.c ft_memchr.c ft_strclr.c ft_strdup.c ft_strmap.c ft_strncpy.c ft_strrchr.c ft_toupper.c ft_bzero.c ft_isprint.c ft_memcmp.c ft_putendl.c ft_strcmp.c ft_strequ.c ft_strmapi.c ft_strnequ.c ft_strstr.c ft_isalnum.c ft_memalloc.c ft_memcpy.c ft_strcat.c ft_strcpy.c ft_striter.c ft_strncat.c ft_strnew.c ft_strsub.c ft_isalpha.c ft_memccpy.c ft_memdel.c ft_strchr.c ft_strdel.c ft_striteri.c ft_strncmp.c ft_strnstr.c ft_tolower.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean:
	/bin/rm -rf $(OBJ)
fclean: clean
	/bin/rm -rf $(NAME)
re: fclean all
