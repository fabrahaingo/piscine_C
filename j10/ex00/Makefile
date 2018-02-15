# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frahaing <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/20 16:31:49 by frahaing          #+#    #+#              #
#    Updated: 2017/08/23 13:52:29 by frahaing         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a

SRC = 	srcs/ft_putchar.c 	\
		srcs/ft_putstr.c 	\
		srcs/ft_strcmp.c 	\
		srcs/ft_strlen.c 	\
		srcs/ft_swap.c

OBJ =	ft_putchar.o 		\
		ft_putstr.o 		\
		ft_strcmp.o 		\
		ft_strlen.o 		\
		ft_swap.o

INC =	includes/

all: $(NAME)

$(NAME):
	@gcc -c $(SRC) -I$(INC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
