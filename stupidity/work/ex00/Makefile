# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laube <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/16 21:20:27 by laube             #+#    #+#              #
#    Updated: 2017/07/16 21:28:29 by laube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = eval_expr
SRC = basics.c eval_expr.c functs.c
OBJ = basics.o eval_expr.o functs.o

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
