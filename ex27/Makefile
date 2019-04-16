# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cuzureau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 14:06:16 by cuzureau          #+#    #+#              #
#    Updated: 2016/11/08 17:04:31 by cuzureau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file

SRC		=	ft_display_file.c

FLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
		rm -rf faspard

fclean: clean
		rm -rf $(NAME)

re: clean fclean make

.PHONY: all clean fclean re
