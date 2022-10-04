# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 12:46:58 by adgutier          #+#    #+#              #
#    Updated: 2022/10/03 12:46:58 by adgutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRC =	ft_char.c ft_hexa.c ft_hexamayus.c ft_itoa_base.c ft_porcent.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_putunsignbr.c ft_void.c
OBJ = $(SRC:.c=.o)
INCLUDE = libftprintf.h



all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re: fclean all
