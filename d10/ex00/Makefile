NAME = libft.a
INCL = includes/
SRC = srcs/ft_putchar.c srcs/ft_putstr.c secs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
INCLUDES_DIR = includes/

all: $(NAME)

$(NAME):
	gcc -I$(INCL) -c -Wall -Werror -Wextra $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
