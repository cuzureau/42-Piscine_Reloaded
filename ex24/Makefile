# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 12:08:54 by cuzureau          #+#    #+#              #
#    Updated: 2016/11/08 16:51:18 by cuzureau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	srcs/ft_putchar.c \
			srcs/ft_putstr.c \
			srcs/ft_strcmp.c \
			srcs/ft_strlen.c \
			srcs/ft_swap.c

INC		=	includes/

FLAGS	=	-Wall -Wextra -Werror

OBJ		=	ft_putchar.o \
			ft_putstr.o \
			ft_strcmp.o \
			ft_strlen.o \
			ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
