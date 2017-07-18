# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laube <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 12:49:46 by laube             #+#    #+#              #
#    Updated: 2017/07/13 18:50:12 by laube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = ft_display_file

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) main.c
	gcc $(FLAGS) main.o -o $(NAME)

clean: 
	rm -rf main.o

fclean: clean
	rm -rf $(NAME)
