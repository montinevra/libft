# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvan-erp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/22 01:09:32 by pvan-erp          #+#    #+#              #
#    Updated: 2017/02/08 20:15:59 by pvan-erp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c get_specifier.c print_int.c print_str.c padding.c
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re
	

all: $(NAME)
	

$(NAME): $(SRC)
	$(CC) -c $(SRC) $(CFLAGS)
	ar r $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

