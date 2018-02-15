# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frahaing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:04:46 by frahaing          #+#    #+#              #
#    Updated: 2017/08/21 14:04:49 by frahaing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		do-op

FLAGS = 	-Wall -Werror -Wextra

SRC = 		useful.c 			\
			do_op.c 			\
			ft_operations.c 	\
			reduction.c

OBJ = 		useful.o 			\
			do_op.o 			\
			ft_operations.o 	\
			reduction.o

PATH_INC =	.

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) -I$(PATH_INC)
	@gcc -o $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)
	@rm -f $(NAME)

re: clean all
