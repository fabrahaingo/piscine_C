# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 11:18:05 by fgiverna          #+#    #+#              #
#    Updated: 2017/08/20 23:23:04 by fgiverna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = srcs/colle-2.c		\
	  srcs/ft_split_line.c	\
	  srcs/generate_rush.c	\
	  srcs/rush.c			\
	  srcs/output.c

OBJ = colle-2.o			\
	  ft_split_line.o	\
	  generate_rush.o	\
	  rush.o			\
	  output.o

INC = includes/

all: $(NAME)

$(NAME):
	$(CC) -c $(SRC) $(CFLAGS) -I$(INC)
	$(CC) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean all
